#include<stdio.h>
void tower_of_hanoi(int n,char x,char y,char z)
{
    if(n==1)
    {
        printf("Move of disk 1 from rod %c to rod %c\n",x,z);
        return;
    }
    tower_of_hanoi(n-1,x,z,y);
    printf("Move of disk %d from rod %c to rod %c\n",n,x,z);
    tower_of_hanoi(n-1,y,x,z);
}
int main()
{
    int n=4;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}
