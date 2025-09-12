#include <iostream>
#include <map>
#include <vector>
using namespace std;

int MajorityElements(vector<int> &arr, int n)
{
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }
    return -1;
}

int main()

{
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    int n = arr.size();
    int ans = MajorityElements(arr, n);
    cout << ans;
    return 0;
}