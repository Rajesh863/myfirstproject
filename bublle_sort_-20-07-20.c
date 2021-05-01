#include<stdio.h>h

int main()
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
        for(int j=0;j<size-1-i;j++)

        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array element:  ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}

