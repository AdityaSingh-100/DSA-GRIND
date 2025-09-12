#include <iostream>
#include <climits>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxi = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    int ans = maxSubarraySum(arr, n);
    cout << ans;

    return 0;
}