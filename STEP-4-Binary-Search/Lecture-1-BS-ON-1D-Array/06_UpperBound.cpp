#include <iostream>
#include <vector>
using namespace std;

int upperBnd(vector<int> &arr, int n, int target)
{
    int ans = n;
    int low = 0, high = n - 1, mid = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > target)
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
    vector<int> arr = {2, 3, 6, 7, 8, 8, 11, 11, 11, 12};
    int n = arr.size();
    int target = 6;
    cout << upperBnd(arr, n, target);
    return 0;
}