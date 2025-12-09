#include <bits/stdc++.h>
using namespace std;

pair<int, int> TargetElem(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int top = (i > 0) ? matrix[i - 1][j] : -1;
            int bottom = (i < n - 1) ? matrix[i + 1][j] : -1;
            int left = (j > 0) ? matrix[i][j - 1] : -1;
            int right = (j < m - 1) ? matrix[i][j + 1] : -1;

            if (matrix[i][j] > top && matrix[i][j] > bottom &&
                matrix[i][j] > left && matrix[i][j] > right)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
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
    int m = matrix[0].size();
    int rows = 5, cols = 5;
    auto ans = TargetElem(matrix, n, m);
    cout << ans.first << " " << ans.second;
    return 0;
}