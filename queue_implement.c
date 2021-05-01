#include<stdio.h>
#include<stdlib.h>
#define c 6
int front=-1,rear=-1;
int a[c];
void enqueue(int d)
{
    if(rear==-1)
    {
        front=rear=0;
        a[rear]=d;
        printf("%d is enqueued\n",d);
        return;
    }
    if(rear==c-1)
    {
        printf("queue is full\n");
        exit(0);
    }
    rear=rear+1;
    a[rear]=d;
    printf("%d is enqueued\n",d);
}
int dequeue()
{
    if(front-1==rear || rear==-1)
    {
        printf("queue is empty\n");
        exit(1);
    }
    int d=a[front];
    front=front+1;
    return d;
}
int front_ele()
{
    return front-1==rear?-1:a[front];
}
void display()
{
    if(rear==front-1 || rear==-1){
        printf("queue is empty\n");
        return;
    }
    while(rear!=front-1)
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
    enqueue(5);
    enqueue(6);
    dequeue();
    enqueue(7);
    printf("The front element of queue is %d\n",front_ele());
    printf("Element of queue is :  ");
    display();
    return 0;
}

