// Question: Given an integer array, find the subarray which has the largest sum and return its sum.
// A subarray is a contiguous non-empty sequence of elements within an array.

// Example: For array [-2,-3,4,-1,-2,1,5,-3], the maximum subarray sum is 7 from subarray [4,-1,-2,1,5].

/// Also can you print the subarrayt with maximum sum
#include <iostream>
#include <climits>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0, maxi = LONG_MIN, ansStart = -1, ansEnd = -1, start = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
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