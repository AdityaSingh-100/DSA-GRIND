#include <iostream>
#include <vector>
#include <map>

using namespace std;

int LongestSubArray(vector<int> &arr, long long k)
{
    int n = arr.size();
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        // we need to calculate the prefi sum till index  i;
        sum += arr[i];

        // if the sum = k , then update the maxLen;
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        // Now to calculate the sum of remaining part i.e x-k

        long long rem = sum - k;

        // finally, update the map checking the condition:
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main()
{

    vector<int> arr = {2, 3, 5, 1, 9};
    long long k = 10;
    int ans = LongestSubArray(arr, k);
    cout << "The length of the longest subarray is : " << ans << "\n";
    return 0;
}