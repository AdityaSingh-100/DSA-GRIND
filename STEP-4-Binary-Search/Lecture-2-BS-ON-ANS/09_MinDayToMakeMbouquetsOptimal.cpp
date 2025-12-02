#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k, int n)
{
    int cnt = 0, noOfBouquet = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            noOfBouquet += (int)(cnt / k);
            cnt = 0;
        }
    }
    noOfBouquet += (int)(cnt / k);

    if (noOfBouquet >= m)
        return true;
    else
        return false;
}

int bs(vector<int> &arr, int m, int k, int n)
{
    long long val = (long long)m * k;
    if (val > n)
        return -1; // impossible to make m bouquets

    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    int low = mini, high = maxi, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (possible(arr, mid, m, k, n) == true)
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

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = arr.size();
    int m = 2;
    int k = 3;
    int ans = bs(arr, m, k, n);
    cout << "Minimum days: " << ans << endl;
    return 0;
}