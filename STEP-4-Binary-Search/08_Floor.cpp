#include <iostream>
#include <vector>
using namespace std;

int Floor(vector<int> &arr, int n, int target)
{
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] <= target)
        {
            ans = arr[mid]; // for value at index where arr[index] <= target
            // ans = mid; // for index
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();
    int target = 25;
    int result = Floor(arr, n, target);
    cout << result;
    return 0;
}