#include <iostream>
using namespace std;

int singleElement(int nums[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    if (n == 1)
    {
        return nums[start];
    }

    while (start <= end)
    {
        if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 != 0 && nums[mid] == nums[mid - 1]))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return nums[start];
}

int main()
{
    int nums[7] = {3, 3, 7, 7, 10, 11, 11};
    int n = 7;
    int ans = singleElement(nums, n);
    cout << ans;
    return 0;
}