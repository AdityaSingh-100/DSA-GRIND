#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int first = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            first = mid;
            high = mid = 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return first;
}
int UpperBound(vector<int> &arr, int n, int target)
{
    int low = 0, high = n - 1;
    int second = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
        {
            second = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return second;
}

pair<int, int> FirstnLast(vector<int> &arr, int n, int target)
{
    int lb = lowerBound(arr, n, target);
    if (lb == n || arr[lb] != target)
        return {-1, -1};
    return {lb, UpperBound(arr, n, target) - 1};
}
int main()
{

    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13}; 
    int n = arr.size();
    int target = 8;
    auto ans = FirstnLast(arr, n, target);
    cout << ans.first << " " << ans.second;
    return 0;
}