#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr, int n)
{
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        minVal = min(minVal, arr[i]);
    }

    return minVal;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int n = arr.size();
    int ans = findMin(arr, n);
    cout << ans;
    return 0;
}