#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMaxOnes(vector<vector<int>> &matrix, int n, int m)
{
    int cnt_max = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt_ones = m - lowerBound(matrix[i], m, 1);
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main()
{
    vector<vector<int>> matrix = {{0, 0, 1, 1, 1},
                                  {0, 0, 0, 0, 0},
                                  {0, 0, 1, 1, 1},
                                  {0, 0, 0, 0, 0},
                                  {0, 1, 1, 1, 1}};
    int n = 5;
    int m = 5;
    int ans = (int)rowWithMaxOnes(matrix, n, m);
    cout << ans;
    return 0;
}