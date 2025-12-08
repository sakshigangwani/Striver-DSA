#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }

    for(int i = 0; i<n; i++){
        cout << nums[i] << " ";
    }
}

int main()
{
    int arr[6] = {0, 1, 4, 0, 5, 2};
    int n = 6;
    moveZeroes(arr, n);
    return 0;
}