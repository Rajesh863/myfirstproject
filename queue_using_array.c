#include<stdio.h>
#include<stdlib.h>
#define c 6
int front,rear,size=0;
int a[c];
void enqueue(int d)
{
    if(size==0)
    {
        front=rear=0;
        a[rear]=d;
        printf("%d is enqueued\n",d);
        size+=1;
        return;
    }
    if(size==c)
    {
        printf("queue is full\n");
        exit(0);
    }
    rear=(rear+1)%c;
    a[rear]=d;
    printf("%d is enqueued\n",d);
    size+=1;
}
int dequeue()
{
    if(size==0)
    {
        printf("queue is empty\n");
        exit(1);
    }
    int d=a[front];
    front=(front+1)%c;
    size-=1;
    return d;
}
int front_ele()
{
    return size==0?-1:a[front];
}
void display()
{
    if(size==0){
        printf("queue is empty\n");
        return;
    }
    while(size!=0)
    {
        printf("%d\t",front_ele());
        dequeue();
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    dequeue();
    enqueue(7);
    printf("The front element of queue is %d\n",front_ele());
    printf("Element of queue is :  ");
    display();
    return 0;
}
