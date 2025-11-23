#include <iostream>
using namespace std;

int firstOcc(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end)
    {
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[6] = {5,7,7,8,8,10};
    int target = 8;
    int n = 6;
    int first = firstOcc(arr, target, n);
    int last = lastOcc(arr, target, n);
    cout << "First Occ: " << first << endl;
    cout << "Last Occ: " << last << endl;
}