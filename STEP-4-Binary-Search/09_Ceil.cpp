#include <bits/stdc++.h>
using namespace std;

int Ceil(vector<int> &arr, int n, int target)
{
    int ans = -1;
    int low = 0, high = n - 1, mid = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2; //
        if (arr[mid] >= target)
        {
            ans = arr[mid];
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
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int target = 25;
    int result = Ceil(arr, n, target);
    cout << result;
    return 0;
}