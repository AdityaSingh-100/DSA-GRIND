#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(int n, vector<int> &arr, int target)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<long long> hashset;
            for (int k = j + 1; k < n; k++)
            {
                long long sum = arr[i] + arr[j];
                sum += arr[k];
                long long fourth = target - (sum);
                if (hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp = {arr[i], arr[j], arr[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(arr[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    int target = 0;
    vector<vector<int>> res = fourSum(n, arr, target);

    for (auto &triplet : res)
    {
        for (auto &num : triplet)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}