#include <iostream>
#include <vector>
using namespace std;

int AppearsOnce(vector<int> &arr, int n)
{
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return (XOR);
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int n = arr.size();

    int ans = AppearsOnce(arr, n);
    cout << ans;

    return 0;
}