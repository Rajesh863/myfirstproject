#include<stdio.h>
#include<conio.h>

int main()
{
    char s1[20],s2[10];
    char *p=s1;
    char *q=s2;
    int flag=1;

    printf("Enter the string 1 :");
    gets(s1);
    printf("\nEnter the string 2 : ");
    gets(s2);

    while(*p++!=*q++)
    flag=0;

    if(flag)
    printf("\nThe given string is equal. ");
    else
    printf("\nThe given string is not equal. ");

    return 0;
}
