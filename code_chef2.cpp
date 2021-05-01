#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int count_stick_cut_operations(int a[],int n)
{
    int c=1;
    if(n==1) return c;
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            c++;
    }
    return c;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //a.insert(num);
    }
    int c=count_stick_cut_operations(a,n);
    cout<<c<<endl;
    }
    return 0;
}
