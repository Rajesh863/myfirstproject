#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* get_node(int d)
{
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=NULL;
    return new_node;
}
void print_list()
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("List is empty\n ");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int length()
{
    int count=0;
    struct node* temp=head;
    if(head==NULL)
    {
        return 0;
    }
    while(temp!=NULL)
    {
        count+=1;
        temp=temp->next;
    }
    return count;
}
void add_at_first(int d)
{
    struct node* new_node=get_node(d);
    new_node->next=head;
    head=new_node;
}
void append(int d)
{
    struct node* new_node=get_node(d);
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    struct node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=new_node;
}
void insert_at_last(int pos,int d)
{
    struct node* new_node=get_node(d);
    int len=length();
    if(pos>len)
    {
        printf("this position is not exit in your list\n");
        return;
    }
    if(pos==1)
    {
        new_node->next=head;
        head=new_node;
        return;
    }
    struct node* prev=head;
    int i=0;
    while(i<pos-2){
        i++;
        prev=prev->next;
    }
    new_node->next=prev->next;
    prev->next=new_node;
}
void delete_node(int d)
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    if(head->data==d)
    {
        head=head->next;
        return;
    }
    else{
        struct node* temp=head;
        struct node* prev=NULL;
        while(temp!=NULL)
        {
            prev=temp;
            temp=temp->next;
            if(temp->data==d)
            {
                prev->next=temp->next;
                temp->next=NULL;
                free(temp);
                break;
            }
        }
    }
    return;
}
int delete_at_pos(int pos)
{
    int i=0,d=-1;
    if(head==NULL || pos>length())
    {
        printf("you cannot delete element\n");
    }
    if(pos==1)
    {
        d=head->data;
        head=head->next;
    }
    else{
        struct node* prev=head;
        struct node* cur;
        while(i<pos-2)
        {
            prev=prev->next;
            i+=1;
        }
        cur=prev->next;
        d=cur->data;
        prev->next=cur->next;
        free(cur);
    }
    return d;
}
void main()
{
    add_at_first(1);
    add_at_first(2);
    add_at_first(3);
    printf("The list elements after adding at first are : ");
    print_list();
    append(6);
    append(7);
    printf("The list elements after adding at last are : ");
    print_list();
    printf("The current length of list is : %d\n",length());
    insert_at_last(3,4);
    insert_at_last(4,5);
    insert_at_last(1,2);
    printf("The list elements after adding at specific postion  are : ");
    print_list();
    delete_node(3);
    delete_node(7);
    printf("The current length of list is : %d\n",length());
    printf("The list elements after deleting at specific element  are : ");
    print_list();
    printf("The deleted element is : %d\n",delete_at_pos(2));
    printf("The deleted element is : %d\n",delete_at_pos(5));
    printf("The current length of list is : %d\n",length());
    printf("The list elements after deleting at specific postion  are : ");
    print_list();

}

