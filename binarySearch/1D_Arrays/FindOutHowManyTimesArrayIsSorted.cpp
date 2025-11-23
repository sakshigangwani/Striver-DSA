#include <iostream>
using namespace std;

int findRotated(int nums[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end)
    {
        if (nums[0] <= nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int nums[5] = {3, 4, 5, 1, 2};
    int ans = findRotated(nums, 5);
    cout << ans;
    return 0;
}