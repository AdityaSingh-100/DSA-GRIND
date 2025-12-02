#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector<int> &arr, int n, int threshold)
{
    int maxi_divisor = INT_MIN, value = maxi_divisor;
    for (int i = 0; i < n; i++)
    {

        maxi_divisor = max(maxi_divisor, arr[i]);
    }

    for (int divisor = 1; divisor <= maxi_divisor; divisor++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ceil((double)arr[i] / (double)divisor);
                }

        if (sum <= threshold)
            return divisor;
    }  
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 5, 9};
    int n = arr.size();
    int threshold = 6;
    int ans = smallestDivisor(arr, n, threshold);
    cout << ans;
    return 0;
}