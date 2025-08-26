#include <iostream>
#include <vector>
using namespace std;

int MissingNo(vector<int> &arr, int N)
{
    int hash[N + 1] = {0};

    for (int i = 0; i < N - 1; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 4, 5};
    int N = arr.size();
    int ans = MissingNo(arr, N);
    cout << ans;

    return 0;
}