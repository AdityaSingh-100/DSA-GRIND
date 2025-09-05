#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &arr, int n, int target)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int moreNeeded = target - num; // 14 - 2 -> 12

        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    int n = arr.size();
    vector<int> ans = twoSum(arr, n, target);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}

/**REVIEW - Code 2 same just returning YES if there
#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

*/