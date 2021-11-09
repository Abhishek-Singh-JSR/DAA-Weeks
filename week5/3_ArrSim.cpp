#include<iostream>
using namespace std;


	int main()
	{
		int arr1[100], arr2[100], l1, l2, i, p = 0, q = 0;
        cin>>l1;
		for (i = 0; i < l1; i++)
		{
			cin>>arr1[i];
		}
		cin>>l2;
		for (i = 0; i < l2; i++)
		{
			cin>>arr2[i];
	    }
	    cout<<"Same Elements are";
		while (p <= l1 && q <= l2)
		{
			if (arr1[p] < arr2[q])
			{
				p++;
			}
			else if (arr2[q] < arr1[p])
			{
				q++;
			}
			else if (arr1[p] == arr2[q])
			{
				cout<<" "<<arr1[p];
				p++;
				q++;
		  }
	  }
		return 0;
	}
