#include<iostream>
using namespace std;

int selection_sort();


int main()
{
    int tc,i;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        selection_sort();
    }
}

int selection_sort()
{
    int n,a[50],i,j,p=0,l=0,c=0,s=0,tmp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        p=i;
        for(j=i+1;j<n;j++)
        {
            c=c+1;
            if(a[j]<a[p])
                p=j;
        }
    //if(p!=i)
    {
        tmp=a[i];
        a[i]=a[p];
        a[p]=tmp;
        s=s+1;
    }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"comparisons = "<<c<<endl<<"swaps"<<" = "<<s<<endl;
    return 0;
}

