#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    int size = high - low + 1;
    int temp[size];
    int k = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k] = arr[left];
            left++;
            k++;
        }
        else
        {
            temp[k] = arr[right];
            k++;
            right++;
        }
    }

    while (left <= mid)
    {
        if (arr[left] <= arr[mid])
        {
            temp[k] = arr[left];
            left++;
            k++;
        }
    }

    while (right <= high)
    {
        if (arr[right] <= arr[high])
        {
            temp[k] = arr[right];
            k++;
            right++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        arr[low + i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[5] = {3, 2, 4, 1, 5};
    mergeSort(arr, 0, 4);
    cout << "Sorted Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}