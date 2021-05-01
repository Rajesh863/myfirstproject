#include<stdio.h>
void quick_sort(int a[],int low,int high)
{
    if(low>=high)
        return;
    int mid=(low+high)/2;
    int i=low,j=high;
    int pivot=a[mid];
    while(i<j){
        if(a[i]>=pivot && a[j]<=pivot){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        else
            i++;
    }
    quick_sort(a,low,mid);
    quick_sort(a,mid+1,high);
}
int main()
{
    int size;
    printf("Enter the array size : ");
    scanf("%d",&size);
    printf("Enter the element of array : ");
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    quick_sort(a,0,size-1);
    for(int i=0;i<size;i++)
        printf("%d\t",a[i]);
    return 0;
}
