#include <iostream>
using namespace std;

int secondLargestElement(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    int secMax = INT_MIN;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
        {
            continue;
        }
        else if (arr[i] > secMax)
        {
            secMax = arr[i];
            flag = true;
        }
    }
    if (flag == false)
    {
        return -1;
    }
    return secMax;
}

int main()
{
    int arr[5] = {3, 2, 1, 7, 4};
    int ans = secondLargestElement(arr, 5);
    cout << ans;
    return 0;
}