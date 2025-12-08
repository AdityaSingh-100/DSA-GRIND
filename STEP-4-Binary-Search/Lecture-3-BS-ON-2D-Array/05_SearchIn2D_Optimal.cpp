#include <bits/stdc++.h>
using namespace std;

bool TargetElem(vector<vector<int>> &arr, int n, int m, int target)
{
    int low = 0, high = (n * m - 1);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m, col = mid % m;
        if (arr[row][col] == target)
            return true;
        else if (arr[row][col] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> arr = {
        {3, 4, 7, 9},
        {12, 13, 16, 18},
        {20, 21, 23, 29}};

    int target = 9;
    int rows = 3, cols = 4;
    int n = arr.size();
    int m = arr[0].size();
    bool ans = TargetElem(arr, n, m, target);
    cout << ans;
    return 0;
}