#include <bits/stdc++.h>
using namespace std;

pair<int, int> FirstLst(vector<int> &arr, int n, int target)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    return {first, last};
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 1, 13};
    int n = arr.size();
    int target = 8;
    auto ans = FirstLst(arr, n, target);
    cout << ans.first << " " << ans.second;
    return 0;
}
