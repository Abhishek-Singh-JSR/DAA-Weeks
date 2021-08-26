#include<iostream>
using namespace std;

int indices_search();
int main()
{
    int tc,i;
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        indices_search();
    }
}

int indices_search()
{
    int n,x,a[10],i,j,k,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            x=a[i]+a[j];
            for(k=0;k<n;k++)
            if(x==a[k])
            {
                p=1;
                cout<<i+1<<" "<<j+1<<" "<<k+1;
                break;
            }
        }
    }
    if(p!=1)
    {
        cout<<"Element not present";
    }
}
