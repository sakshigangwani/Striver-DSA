#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {3, 2, 1, 7, 4};
    int ans = largestElement(arr, 5);
    cout << ans;
    return 0;
}