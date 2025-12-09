#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        } 
    }
    return -1;
}

pair<int, int> TargetElem(vector<vector<int>> &arr, int n, int m, int target)
{
    for (int i = 0; i < n; i++)
    {
        int ind = -1;
        ind = binarySearch(arr[i], target);
        if (ind != -1)
        {
            return {i, ind};
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