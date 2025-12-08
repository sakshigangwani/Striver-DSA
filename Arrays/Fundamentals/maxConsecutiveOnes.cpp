#include <iostream>
using namespace std;

int maxOne(int arr[], int n)
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
        }
    }
    if (count > max)
    {
        max = count;
    }
    return max;
}

int main()
{
    int arr[6] = {1, 1, 0, 1, 1, 1};
    int ans = maxOne(arr, 6);
    cout << ans;
    return 0;
}