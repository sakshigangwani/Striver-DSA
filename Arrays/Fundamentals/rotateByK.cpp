#include <iostream>
#include <vector>
using namespace std;

void rotateByK(int nums[], int n, int k)
{
    vector<int> ans(n);
    k = k % n;
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[(i + k) % n];
    }

    for (int i = 0; i < n; i++)
    {
        nums[i] = ans[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k = 2;
    rotateByK(arr, 6, k);
    return 0;
}