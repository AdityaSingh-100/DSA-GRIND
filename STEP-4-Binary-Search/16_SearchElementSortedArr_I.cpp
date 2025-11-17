#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int target)
{
    int ans = -1;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == target)
        {
            ans = i;
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 0, 1, 2, 3};
    int n = arr.size();
    int target = 43;
    cout << search(arr, n, target);
    return 0;
}