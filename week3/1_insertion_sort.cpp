#include<iostream>
using namespace std;

int insertion_sort();
int main()
{
    int tc,i;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        insertion_sort();
    }
}

int insertion_sort()
{
    int n,a[50],i,j,k,p=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0&&a[j]>k)
        {
            p=p+1;
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
        c=c+1;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"comparisons = "<<p<<endl<<"shifts"<<" = "<<c+p<<endl;
    return 0;
}
