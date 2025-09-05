#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt > (n / 2))
        {
            return arr[i];
        }
    }
}

int main()
{
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};
    int n = arr.size();
    int ans = MajorityElement(arr, n);
    cout << ans;
    return 0;
}