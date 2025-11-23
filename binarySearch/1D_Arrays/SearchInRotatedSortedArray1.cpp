#include <iostream>
using namespace std;

int rotatedArray(int nums[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid] < target && target <= nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[3] = {5, 1, 3};
    int target = 3;
    int n = 3;
    int ans = rotatedArray(arr, target, n);
    cout << ans;
    return 0;
}