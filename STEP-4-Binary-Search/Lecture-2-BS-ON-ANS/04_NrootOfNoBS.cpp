#include <bits/stdc++.h>
using namespace std;

int midPower(int mid, int n)
{
    int result = (int)pow(mid, n);
    return result;
}


int NrootBS(int n, int m)
{
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (midPower(mid, n) == m)
            return mid;
        else if (midPower(mid, n) < m)
            low = mid + 1;

        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n, m;
    cout << "Enter the value of n and then m : ";
    cin >> n >> m;
    int ans = NrootBS(n, m);
    cout << ans;
    return 0;
}