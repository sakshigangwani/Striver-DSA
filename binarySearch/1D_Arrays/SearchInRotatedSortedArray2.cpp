#include <iostream>
using namespace std;

bool rotatedArray(int nums[], int target, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return true;
        }

        if (nums[start] == nums[mid] && nums[mid] == nums[end])
        {
            start++;
            end--;
        }
        else if (nums[start] <= nums[mid])
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
    return false;
}

int main()
{
    int arr[7] = {2, 5, 6, 0, 0, 1, 2};
    int target = 0;
    int n = 7;
    bool ans = rotatedArray(arr, target, n);
    cout << ans;
    return 0;
}