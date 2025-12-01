#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &arr, int hourly)
{
    int totalH = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        totalH += ceil((double)arr[i] / (double)hourly);
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> &arr, int h)
{
    for (int i = 1; i <= findMax(arr); i++)
    {
        int reqTime = calculateTotalHours(arr, i);
        if (reqTime <= h)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int h;
    vector<int> arr = {3, 6, 7, 11};
    cout << "Enter hour to eat : ";
    cin >> h;
    int ans = minimumRateToEatBananas(arr, h);
    cout << ans;
    return 0;
}