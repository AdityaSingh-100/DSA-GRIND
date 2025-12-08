#include <bits/stdc++.h>
using namespace std;

bool TargetElem(vector<vector<int>> &arr, int rows, int cols, int n, int target)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
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

    int n = arr.size();
    int target = -1;
    int rows = 3, cols = 4;
    auto ans = TargetElem(arr, rows, cols, n, target);
    cout << ans;
    return 0;
}