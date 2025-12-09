#include <bits/stdc++.h>
using namespace std;

pair<int, int> TargetElem(vector<vector<int>> &arr, int n, int m, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> arr = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int n = arr.size();
    int m = arr[0].size();
    int target = 30;
    auto ans = TargetElem(arr, n, m, target);
    cout << ans.first << " " << ans.second;
    return 0;
}