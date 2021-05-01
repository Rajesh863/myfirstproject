#include<stdio.h>
#include<conio.h>

int main()
{
    char s1[50],s2[10];
    char *p=s1;
    char *q=s2;

    printf("Enter the string 1 :");
    gets(s1);
    printf("\nEnter the string 2 : ");
    gets(s2);

    while(*p!='\0')
    p++;

    while(*q!='\0'){
        *p++=*q++;
    }

    printf("The new concatenated string is : %s",s1);
    return 0;
}
