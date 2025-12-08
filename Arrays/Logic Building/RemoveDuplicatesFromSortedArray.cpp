#include <iostream>
using namespace std;

int removeDuplicates(int nums[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (nums[i] != nums[j])
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    return i + 1;
}

int main()
{
    int arr[6] = {0, 0, 3, 3, 5, 6};
    int ans = removeDuplicates(arr, 6);
    cout << ans;
    return 0;
}