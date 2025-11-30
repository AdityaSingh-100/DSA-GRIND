#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n)
{
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        // search space is already sorted
        // then always arr[low] is will be smaller
        // in that search space
        // so we dont have to do binary search
        if (arr[low] <= arr[high])
        {
            // ans = min(ans, arr[low]); same as below
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            break;
        }

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (arr[low] <= arr[mid])
        {
            if (arr[low] < ans)
            {
                index = low;
                ans = arr[low];
            }
            // ans = min(ans, arr[low]);

            low = mid + 1;
        }
        else
        {
            high = mid - 1;
            // ans = min(ans, arr[mid]);
            index = mid;
            if (arr[mid] < ans)
            {
                ans = arr[mid];
            }
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {4, 5, 6, 6, 0, 6, 2};
    // vector<int> arr = {2, 2, 2, 2, 2, , 0, 1};
    int n = arr.size();
    int ans = search(arr, n);
    cout << ans;

    return 0;
}