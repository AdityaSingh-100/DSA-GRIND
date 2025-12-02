#include <bits/stdc++.h>
using namespace std;

int SumOfDivision(vector<int> &arr, int mid)
{
    int n = arr.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += ceil((double)arr[i] / (double)mid);
    }
    return sum;
}

int bs(vector<int> &arr, int threshold, int n)
{
    int maxi = INT_MIN, ans = -1;
    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, arr[i]);
    }

    if (n > threshold)
        return -1;
    int low = 1, high = maxi;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (SumOfDivision(arr, mid) <= threshold)
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
    vector<int> arr = {1, 2, 5, 9};
    int n = arr.size();
    int threshold = 7;
    int ans = bs(arr, threshold, n);
    cout << ans;
    return 0;
}