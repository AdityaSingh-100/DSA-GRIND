#include <bits/stdc++.h>
using namespace std;

int maxOnes(int arr[][5], int rows, int cols)
{
    int index = -1, max_cnt = -1;
    for (int i = 0; i < rows; i++)
    {
        int cntRow = 0;
        for (int j = 0; j < cols; j++)
        {
            cntRow += arr[i][j];
        }
        if (cntRow > max_cnt)
        {
            max_cnt = cntRow;
            index = i;
        }
    }
    return index;
}

int main()
{
    int arr[5][5] = {
        {0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 1}};

    int rows = 5, cols = 5;
    int ans = maxOnes(arr, rows, cols);
    cout << "Row with max 1s: " << ans << endl;
    return 0;
}