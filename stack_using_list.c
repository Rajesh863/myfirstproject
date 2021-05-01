#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* top=NULL;
struct node* create_node(int d)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=NULL;
    return new_node;
}
void push(int d)
{
    struct node* new_node=create_node(d);
    if(top==NULL)
    {
        top=new_node;
        printf("%d is pushed\n",d);
        return;
    }
    new_node->next=top;
    top=new_node;
    printf("%d is pushed\n",d);
}
void pop()
{
    if(top==NULL)
        return;
    struct node* temp=top;
    //printf("%d is popped\n",top->data);
    top=top->next;
    free(temp);
}
void display()
{
    if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        while(top!=NULL){
            printf("%d\t",top->data);
            pop();
        }
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    push(6);
    printf("Element in stack :");
    display();
    return 0;
}
