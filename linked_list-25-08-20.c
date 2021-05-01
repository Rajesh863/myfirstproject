#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
void print_list(struct node* h)
{
    struct node* temp=h;
    if(head==NULL)
    {
        printf("List is empty ");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void add_node(int d)
{
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=NULL;
    struct node* temp=head;
    if(head==NULL)
    {
        head=new_node;
    }
    else{
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=new_node;
    }
    return;
}
struct node* reverse_list(struct node* head_ref){
    struct node *prev=NULL,*cur=head_ref;
    while(cur!=NULL){
        struct node* next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    return prev;
}
struct node* reverse_rec(struct node* head_ref)
{
    if(head_ref==NULL || head_ref->next==NULL){
        return head_ref;
    }
    struct node* temp=reverse_rec(head_ref->next);
    head_ref->next->next=head_ref;
    head_ref->next=NULL;
    return temp;
}
int iscyclic(struct node* head){
     struct node *slow = head, *fast = head;

    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return 1;
        }
    }
    return 0;
}
void main()
{
    int num,n;
    printf("Enter the number of node that you want to add : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("Enter Node %d data : ",i);
    scanf("%d",&num);
    add_node(num);
    }
    print_list(head);
    printf("\n");
    if(iscyclic(head))
        printf("cyclic\n");
    else
        printf(" not cyclic\n");
    struct node* p=reverse_list(head);
    print_list(p);
    printf("\n");

    struct node* q=reverse_rec(head);
    print_list(q);
}
