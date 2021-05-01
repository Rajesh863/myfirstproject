#include<stdio.h>
#define capacity 10
int a[capacity],top=-1;
int isfull()
{
    if((capacity-1)==top)
        return 1;
    return 0;
}
int isempty()
{
    if(top==-1)
        return 1;
    return 0;
}
void push(int d)
{
    if(isfull())
    {
        printf("stack Overflow \n");
        return;
    }
    else
    {
        a[++top]=d;
        printf("%d is pushed into stack\n",d);
    }
}
int top_ele()
{
    if(isempty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    return a[top];
}
void pop()
{
     if(isempty())
    {
        printf("Stack underflow \n");
        return;
    }
    printf("The popped element is %d\n",a[top--]);
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    printf("The top element of stack is : %d",top_ele());
    //printf("The element in the stack is :"display());
    return 0;
}
