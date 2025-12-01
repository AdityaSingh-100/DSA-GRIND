#include <bits/stdc++.h>
using namespace std;

int SearchElementSorted(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        // left Sorted
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        // Right Sorted
        else
        {
            if (arr[mid] <= target && target <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = arr.size();
    int target = 1;
    int ans = SearchElementSorted(arr, n, target);
    cout << ans;
    return 0;
}
// NOTE - TIP BY STRIVER
//  if you get questions envolving duplicates then try to solve them as unique element based and modify the code where the condition fails , for ex here it breaks at identifying the sorting portion