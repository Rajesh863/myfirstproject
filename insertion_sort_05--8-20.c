#include<stdio.h>

void main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d numbers: \n",size);
    for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("\nThe sorted array :  ");
    for(int i=0;i<size;i++)
    printf("%d  ",a[i]);

}
