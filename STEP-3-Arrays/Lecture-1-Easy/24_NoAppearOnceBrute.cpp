#include <iostream>
#include <vector>
using namespace std;

int AppearsOnce(vector<int> &arr, int n)
{
    int num = 0, cnt;
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
            {
                cnt++;
            }
        }
        if (cnt == 1)
            return num;
    }
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int n = arr.size();

    int ans = AppearsOnce(arr, n);
    cout << ans;

    return 0;
}