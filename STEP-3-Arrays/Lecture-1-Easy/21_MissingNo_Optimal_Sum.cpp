#include <iostream>
#include <vector>
using namespace std;

int MissingNo(vector<int> &arr, int n)
{

    int sum = (n * (n + 1)) / 2;

    int sum2 = 0;

    for (int i = 0; i < n - 1; i++)
    {
        sum2 += arr[i];
    }
    return (sum - sum2);
}

int main()
{

    vector<int> arr = {1, 2, 4, 5};
    int n = 5;

    int ans = MissingNo(arr, n);
    cout << ans;

    return 0;
}