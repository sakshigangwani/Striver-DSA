#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    selectionSort(arr, 6);
    return 0;
}