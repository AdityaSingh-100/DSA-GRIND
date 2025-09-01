#include <iostream>
#include <vector>
using namespace std;

int LongestSubarrayWithSumK(vector<int> &arr, long long k)
{
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    int n = arr.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    return maxLen;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    int k = 6;
    int ans = LongestSubarrayWithSumK(arr, k);

    cout << ans;
    return 0;
}