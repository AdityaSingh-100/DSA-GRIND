#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

vector<int> LeadersOptimal(vector<int> &arr, int n)
{

    int maxi = INT_MIN;
    vector<int> ans;
    // O(N)
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        // Keep track of right max
        maxi = max(maxi, arr[i]);
    }
    // O(N log N)
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    int n = arr.size();
    vector<int> ans = LeadersOptimal(arr, n);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}