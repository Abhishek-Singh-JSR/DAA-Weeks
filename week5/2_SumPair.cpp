#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n,i,j,flag=0;
			cin>> n;
			int array[n];
			for(i = 0; i < n; i++)
	    {
	      cin>> array[i];
	    }
			sort(array, array + n);
			i = 0;
	    j = n - 1;
			int sum;
			cin>>sum;
			while(i<j)
			{
				if(array[i] + array[j] == sum)
				{
					cout<< array[i]<<" "<< array[j]<<endl;
					i++;
					j--;
					flag=1;
				}
				else if( array[i] + array[j] < sum)
				{
					i++;
				}
				else
	      {
				   j--;
	      }
			}
			if(flag==0)
	    {
			    cout<<"NO such pair exits"<<endl;
	    }
		}
	}
