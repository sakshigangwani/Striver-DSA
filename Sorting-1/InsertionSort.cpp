#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    insertionSort(arr, 7);
    return 0;
}