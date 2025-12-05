#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        bool flag = false;
        for(int j=0; j<i; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    bubbleSort(arr, 6);
    return 0;
}