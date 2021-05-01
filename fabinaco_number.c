#include<stdio.h>
int fin(int n)
{
    if(n==0 ){
        //printf("0\t");
        return 0;
    }
    if(n==1){
        //printf("1\t");
        return 1;
    }
    printf("%d\t",fin(n-2)+fin(n-1));
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    fin(n);
    //printf("%d\t",fin(n));
    return 0;
}
