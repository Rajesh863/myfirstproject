#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int size,i=0;
	printf("Enter the size of string  : ");
	scanf("%d",&size);
	char str[size],rev[size];
	printf("\nEnter the string : ");
	fflush(stdin);
	gets(str);
	int n=strlen(str);
	int j=n-1;
	//char *q=str+n;
	//char *p=str;
	while(j>=0)
	{
		rev[i]=str[j];
		i++;
		j--;
	}
	rev[i]='\0';
	printf("\nThe given string is : %s",str);
	printf("\nThe Reverse string is : %s",rev);
      
	if(strcmp(str,rev)==0)
      printf("\nThe given string is palindrome");
	else
	printf("\nThe given string is not palindrome");
	getch();
}
