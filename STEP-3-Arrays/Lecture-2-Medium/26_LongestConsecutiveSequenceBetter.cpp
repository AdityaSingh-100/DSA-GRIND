#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int LongestConsecutiveSequence(vector<int> &arr, int n)
{
    if (arr.size() == 0)
        return 0;
    sort(arr.begin(), arr.end());
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            cnt += 1;
            lastSmaller = arr[i];
        }
        else if (lastSmaller != arr[i])
        {
            cnt = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    vector<int> arr = {100, 102, 100, 101, 101, 4, 3, 2, 3, 2, 1, 1, 1, 2};
    int n = arr.size();
    cout << LongestConsecutiveSequence(arr, n);

    return 0;
}