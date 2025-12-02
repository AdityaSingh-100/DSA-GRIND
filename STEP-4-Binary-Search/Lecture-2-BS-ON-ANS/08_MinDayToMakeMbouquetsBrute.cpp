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

int minDaysToMakeBouquets(vector<int> &arr, int m, int k, int n)
{
    long long val = (long long)m * k;
    if (val > n)
        return -1;

    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    for (int i = mini; i <= maxi; i++)
    {
        if (possible(arr, i, m, k, n) == true)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = arr.size();
    int m = 2;
    int k = 3;
    int ans = minDaysToMakeBouquets(arr, m, k, n);
    cout << "Minimum days: " << ans << endl;
    return 0;
}