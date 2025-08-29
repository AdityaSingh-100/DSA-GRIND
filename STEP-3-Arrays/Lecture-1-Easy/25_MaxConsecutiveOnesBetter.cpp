#include <iostream>
#include <vector>
using namespace std;

// Through Hashing
int AppearsOnce(vector<int> &arr, int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int hash[maxi + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] == 1)
        {
            return arr[i];
        }
    }
    return -1; // Add return statement for safety
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int n = arr.size();

    int ans = AppearsOnce(arr, n);
    cout << ans;

    return 0;
}