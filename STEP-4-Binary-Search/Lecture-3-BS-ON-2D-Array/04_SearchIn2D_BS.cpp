#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int target, int n)
{

    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return true;

        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

bool TargetElem(vector<vector<int>> &arr, int n, int m, int target)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] <= target && target <= arr[i][m - 1])
        {
            return binarySearch(arr[i], target, m);
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr = {
        {3, 4, 7, 9},
        {12, 13, 16, 18},
        {20, 21, 23, 29}};

    int target = 99;
    int rows = 3, cols = 4;
    int n = arr.size();
    int m = arr[0].size();
    bool ans = TargetElem(arr, n, m, target);
    cout << ans;
    return 0;
}