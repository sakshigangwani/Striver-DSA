#include <iostream>
using namespace std;

int peakElement(int nums[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (nums[mid] <= nums[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    int arr[7] = {1, 2, 1, 3, 5, 6, 4};
    int ans = peakElement(arr, 7);
    cout << ans;
    return 0;
}