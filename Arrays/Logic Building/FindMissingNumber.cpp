#include <iostream>
using namespace std;

int missingNumber(int nums[], int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    for (int i = 0; i < n; i++)
    {
        sum -= nums[i];
    }

    return sum;
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int ans = missingNumber(arr, 5);
    cout << ans;
    return 0;
}