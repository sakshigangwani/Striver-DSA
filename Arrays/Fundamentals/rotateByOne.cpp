#include <iostream>
using namespace std;

void rotateByOne(int arr[], int n)
{
    int first = arr[0];

    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    arr[n-1] = first;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rotateByOne(arr,5);
    return 0;
}