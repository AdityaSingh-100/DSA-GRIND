#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Through Map (Hashing)
int AppearsOnce(vector<int> &arr, int n)
{
    map<int, int> freq; // map to store frequency of each element

    // Count frequency of each element
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Find element with frequency 1
    for (auto it : freq)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1; // if no element appears once
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};

    int n = arr.size();

    int ans = AppearsOnce(arr, n);
    cout << ans;

    return 0;
}