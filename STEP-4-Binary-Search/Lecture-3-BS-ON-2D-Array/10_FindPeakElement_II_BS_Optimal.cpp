#include <bits/stdc++.h>
using namespace std;

int findMaxIndex(vector<vector<int>> &matrix, int n, int m, int col)
{
    int maxValue = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][col] > maxValue)
        {
            maxValue = matrix[i][col];
            index = i;
        }
    }
    return index;
}

pair<int, int> FindPeakGrid(vector<vector<int>> &matrix, int n, int m)
{
    int low = 0, high = m - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int maxRowIndex = findMaxIndex(matrix, n, m, mid);
        int left = mid - 1 >= 0 ? matrix[maxRowIndex][mid - 1] : -1;
        int right = mid + 1 >= 0 ? matrix[maxRowIndex][mid + 1] : -1;
        if (matrix[maxRowIndex][mid] > left && matrix[maxRowIndex][mid] > right)
        {
            return {maxRowIndex, mid};
        }
        else if (matrix[maxRowIndex][mid] < left)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main()
{

    vector<vector<int>> matrix = {
        {4, 2, 5, 1, 4, 5},
        {2, 9, 3, 2, 3, 2},
        {1, 7, 6, 0, 1, 3},
        {3, 6, 2, 3, 7, 2}};

    int n = matrix.size();
    int m = matrix[0].size();
    int rows = 4, cols = 6;
    auto ans = FindPeakGrid(matrix, n, m);
    cout << ans.first << " " << ans.second;
    return 0;
}