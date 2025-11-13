#include <bits/stdc++.h>
using namespace std;

vector<int> MajorityBrute(vector<int> &arr, vector<int> ls)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (ls.size() == 0 || ls[0] != arr[i])
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    cnt++;
                }
            }
            if (cnt > (n / 3))
            {
                ls.push_back(arr[i]);
            }
            if (ls.size() == 2)
                break;
        }
    }
    return ls;
}

int main()
{

    vector<int> arr = {1, 1, 1, 1, 3, 2, 2, 2};
    vector<int> ls = {};

    vector<int> ans = MajorityBrute(arr, ls);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}
