#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int>> &matrix, int n, int m)
{
    vector<int> ls;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ls.push_back(matrix[i][j]);
        }
    }

    sort(ls.begin(), ls.end());

    int ans = ls[(m * n) / 2];

    return ans;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 5, 7, 9, 11},
        {2, 3, 4, 5, 10},
        {9, 10, 12, 14, 16}};

    int n = matrix.size();
    int m = matrix[0].size();
    int ans = findMedian(matrix, n, m);
    cout << "Median: " << ans << endl;
    return 0;
}