#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *left;
struct node *right;
};
struct node *start=NULL;
struct node *root=NULL;
struct node* create(struct node *root, int data)
{
if(root == NULL){
root=(struct node*)malloc(sizeof(struct node));
root->info=data;
root->left=NULL;
root->right=NULL;
return root;
}
else{
if(data<root->info)
root->left=create(root->left, data);
else
if(data>root->info)
root->right=create(root->right,data);
else
printf("\n duplicate data");
return root;
}
}
void inorder(struct node *root)
{
if(root!=NULL){
inorder(root->left);
printf("%d ",root->info);
inorder(root->right);
}
}
void preorder(struct node *root)
{
if(root!=NULL){
printf("%d ",root->info);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node *root)
{
if(root!=NULL){
postorder(root->left);
postorder(root->right);
printf("%d ",root->info);
}
}
void main()
{
int n,ch,i,d;
struct node* root=NULL;
do{
printf("\n 1. Create 2. Inorder 3. preorder 4. postorder 5. exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1: root=NULL;
printf("\n enter no. of nodes");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nEnter the data:\n");
scanf("%d",&d);
root=create(root,d);
}
break;
case 2: inorder(root);
break;
case 3: preorder(root);
break;
case 4: postorder(root);
break;
case 5: printf("\nEnd");
break;
}
}while(ch!=5);
}
