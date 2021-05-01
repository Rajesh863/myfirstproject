#include<stdio.h>
#include<stdlib.h>
#define size 8
int b[size];
void merge_sort(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        merge_sort(a,start,mid);
        merge_sort(a,mid+1,end);

        //merge_arr(a,start,mid,end);
        int n1=mid-start+1;
        int n2=end-mid;
        int left[n1];
        int right[n2];
        for(int i=0;i<n1;i++)
            left[i]=a[start+i];
        for(int i=0;i<n2;i++)
            right[i]=a[mid+1+i];

        int i=0,j=0,k=start;
        while(i<n1 && j<n2){
            if(left[i]<right[j]){
               a[k]=left[i];
               i++;
            }
            else{
               a[k]=right[j];
               j++;
            }
            k++;
       }
       while(i<n1){
           a[k]=left[i];
           i++;
           k++;
       }
       while(j<n2){
           b[k]=right[j];
           k++;
           j++;
       }
    }
}
int main()
{
    int a[size];
    printf("Enter the element of array: ");
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("Before sorting array is : ");
    for(int i=0;i<size;i++)
        printf("%d\t",a[i]);
    merge_sort(a,0,size-1);
    printf("After sorting array is : ");
    for(int i=0;i<size;i++)
        printf("%d\t",a[i]);
   return 0;
}
