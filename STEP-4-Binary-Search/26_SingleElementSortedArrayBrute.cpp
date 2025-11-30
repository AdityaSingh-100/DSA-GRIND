#include <bits/stdc++.h>
using namespace std;

int SingleEle(vector<int> &arr, int n)
{
    if (n == 1)
        return arr[0];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (arr[i] != arr[i + 1])
            {
                return arr[i];
            }
        }
        else if (i == n - 1)
        {
            if (arr[i] != arr[i - 1])
            {
                return arr[i];
            }
        }
        else
        {
            if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
            {
                return arr[i];
            }
        }
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = arr.size();
    int ans = SingleEle(arr, n);
    cout << ans;
    return 0;
}