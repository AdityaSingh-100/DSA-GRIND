#include <bits/stdc++.h>
using namespace std;

pair<int, int> TargetElem(vector<vector<int>> &matrix, int n, int m, int target)
{
    int row = 0, col = m - 1;
    while (row < n && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return {row, col};
        }
        else if (matrix[row][col] < target)
            row++;
        else
            col--;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int n = matrix.size();
    int m = matrix[0].size() ;
    int target = 30;
    int rows = 5, cols = 5;
    auto ans = TargetElem(matrix, n, m, target);
    cout << ans.first << " " << ans.second;
    return 0;
}