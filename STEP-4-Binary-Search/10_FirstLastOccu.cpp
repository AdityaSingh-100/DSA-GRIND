#include <bits/stdc++.h>
using namespace std;

pair<int, int> LinearSearch(vector<int> &arr, int n, int target)
{
    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            first = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == target)
        {
            last = i;
            break;
        }
    }

    return {first, last};
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int n = arr.size();
    int target = 8;
    auto ans = LinearSearch(arr, n, target);
    cout << ans.first << " " << ans.second;

    return 0;
}