#include <iostream>
#include <vector>
using namespace std;

int lb(vector<int> &arr, int n, int target)
{

    int ans = n;
    int low = 0, high = n - 1, mid = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= target)
        {
            ans = mid;
            // look for more small index on left
            high = mid - 1;
        }
        else
        {
            low = mid + 1; // look for right
        }
    }
    return ans;
}

int main()
{
    // vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
    vector<int> arr = {10, 20, 30, 40, 50};
    int n = arr.size();

    int target = 25;
    cout << lb(arr, n, target);
    return 0;
}