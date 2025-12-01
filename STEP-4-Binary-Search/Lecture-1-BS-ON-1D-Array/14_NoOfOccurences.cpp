#include <bits/stdc++.h>
using namespace std;

int findOccurences(vector<int> &arr, int n, int target)
{
    int cnt = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == target)
        {
            cnt += 1;
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3};
    int n = arr.size();
    int target = 3;
    int ans = findOccurences(arr, n, target);
    cout << ans;
    return 0;
}