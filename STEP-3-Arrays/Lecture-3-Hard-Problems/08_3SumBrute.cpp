#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Threesum(int n, vector<int> &arr)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
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
    vector<vector<int>> finalAns = Threesum(n, arr);
    for (auto it : finalAns)
    {
        cout << "[";
        for (int i = 0; i < it.size(); i++)
        {
            cout << it[i];
            if (i != it.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
    return 0;
}