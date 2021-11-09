#include<iostream>
using namespace std;


int c = 0;
int swaps = 0;
int partitionFunc(int array[], int l, int h)
{
    int pivot = array[l];
    int i = l, j = h;
    while(i < j)
    {
        do{
            i++;
            c++;
        }while(array[i] <= pivot);
        c--;
        do{
            j--;
            c++;
        }while(array[j] > pivot);
        c--;
        if(i < j){
            swap(array[i], array[j]);
            swaps++;
        }
    }
    swap(array[l], array[j]);
    swaps++;
    return j;
}


void quickSort(int array[], int l, int h)
{
    int j;
    if(l < h)
    {
        j = partitionFunc(array, l, h);
        quickSort(array, l, j);
        quickSort(array, j + 1, h);
    }
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
        quickSort(array, 0, n);
        for(int i = 0; i < n; i++)
            cout << array[i] << " ";
        cout << endl;
        cout << "comparisons = " << c << endl;
        cout << "Swaps = " << swaps << endl;
    }
}
