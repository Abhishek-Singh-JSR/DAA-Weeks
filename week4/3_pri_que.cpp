#include<iostream>
#include<queue>
#include<climits>
using namespace std;


int kthSmallest(int array[], int array_size, int k)
{
    priority_queue<int> maxh;
    for(int i = 0; i < array_size; i++)
    {
        maxh.push(array[i]);
        if(maxh.size() > k)
            maxh.pop();
    }
    if(maxh.empty())
        return INT_MIN;
    return maxh.top();
}


int kthLargest(int array[], int array_size, int k)
{
    priority_queue<int, vector<int>, greater<int> > minh;
    for(int i = 0; i < array_size; i++)
    {
        minh.push(array[i]);
        if(minh.size() > k)
            minh.pop();
    }
    if(!minh.empty())
        return minh.top();
    return INT_MAX;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *array = new int[n];
        for(int i = 0; i < n; i++)
            cin >> array[i];
        int k;
        cin >> k;
        int kLargest = kthLargest(array, n, k);
        if(kLargest == INT_MAX)
            cout << "Not Present" << endl;
        else
            cout << k <<"th Largest: " << kLargest << endl;
        int kSmallest = kthSmallest(array, n, k);
        if(kSmallest == INT_MIN)
            cout << "Not Present" << endl;
        else
            cout << k << "th smallest: " << kSmallest << endl;
    }
}

