#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> &arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // Start j from i+1 to avoid using same element twice like
        // for(int j = i+1 ;j<n; j++) then you dont need to do if( i == j) continue  tc  reduce from O(N^3) to O(N^2)
        {
            if (i == j)
                continue;
            if (arr[i] + arr[j] == target)
            {
                return {i, j}; // Return indices
            }
        }
    }
    return {-1, -1}; // Return {-1, -1} if no pair found
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    vector<int> ans = TwoSum(arr, n, target);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int n, vector<int> &arr, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}
    */