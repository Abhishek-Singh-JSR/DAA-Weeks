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
    int n,x,a[10],i,j,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]-a[j]==x)||(a[j]-a[i]==x))
            {
                p=p+1;
            }
        }
    }
    if(p==0)
    {
        cout<<"Sequence not found";
    }
    else
            cout<<p;
}
