#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr, int n, int target)
{
    int first = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return first;
}
int lastOccurence(vector<int> &arr, int n, int target)
{
    int last = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            high = mid - 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}
pair<int, int> FirstnLast(vector<int> &arr, int n, int target)
{
    int first = firstOccurence(arr, n, target);
    if (first == -1)
        return {-1, -1};
    int last = lastOccurence(arr, n, target);
    return {first, last};
}

int count(vector<int> &arr, int n, int target)
{
    pair<int, int> ans = FirstnLast(arr, n, target);
    if (ans.first == -1)
        return 0;
    return ans.second - ans.first + 1;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    int n = arr.size();
    int target = 8;
    // auto ans = FirstnLast(arr, n, target);
    // cout << ans.first << " " << ans.second;
    int ans = count(arr, n, target);
    cout << ans;
    return 0;
}