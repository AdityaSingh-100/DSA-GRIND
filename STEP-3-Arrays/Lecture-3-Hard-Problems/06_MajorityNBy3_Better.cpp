#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> majorityELement(vector<int> &arr, vector<int> ls, map<int, int> mpp)
{
    int n = arr.size();
    int mini = (int)(n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i]] == mini)
        {
            ls.push_back(arr[i]);
        }
        if (ls.size() == 2)
            break;
    }
    sort(ls.begin(), ls.end());
    return ls;
}

int main()
{
    vector<int> arr = {1, 1, 1, 1, 3, 2, 2, 2};
    map<int, int> mpp;
    vector<int> ls = {};
    vector<int> ans = majorityELement(arr, ls, mpp);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}