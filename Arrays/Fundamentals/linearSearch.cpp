#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{   
    for(int i=0; i<n; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {2, 3, 4, 5, 3};
    int target = 5;
    int ans = linearSearch(arr, 5, target);
    cout << ans;
    return 0;
}