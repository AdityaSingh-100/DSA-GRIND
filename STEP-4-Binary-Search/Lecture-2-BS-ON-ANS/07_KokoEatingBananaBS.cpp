#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr)
{
    int maxi = INT_MIN;
    // int n = arr.size();
    // for (int i = 0; i < n; i++)
    // {
    //     maxi = max(maxi, arr[i]);
    // }
    // return maxi;

    max(arr.begin(), arr.end());
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
    int low = 1, high = findMax(arr);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(arr, mid);
        if (totalH <= h)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
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