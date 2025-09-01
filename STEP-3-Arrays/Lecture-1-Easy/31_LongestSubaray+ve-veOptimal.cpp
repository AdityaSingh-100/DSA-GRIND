#include <iostream>
#include <vector>
#include <map>
using namespace std;

// For positvies as well as negatives

int getLongestSubarray(vector<int> &arr, int k)
{

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main()
{

    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 3};
    int k = 6;
    int ans = getLongestSubarray(arr, k);
    cout << ans;
    return 0;
}