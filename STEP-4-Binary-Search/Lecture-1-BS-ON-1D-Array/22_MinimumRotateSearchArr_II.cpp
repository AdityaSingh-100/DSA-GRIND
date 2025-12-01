#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n)
{
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }
        if (arr[low] < arr[mid])
        {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            ans = min(ans, arr[mid]);
        }
    }
    return ans;
}

int main()
{
    // vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    vector<int> arr = {2, 2, 2, 2, 0, 1};
    int n = arr.size();
    int ans = search(arr, n);
    cout << ans;

    return 0;
}