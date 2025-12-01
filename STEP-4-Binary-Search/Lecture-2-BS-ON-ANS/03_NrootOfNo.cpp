#include <bits/stdc++.h>
using namespace std;

int Nroot(int i, int n)
{
    int result = (int)pow(i, n);
    return result;
}

int linearSearch(int n, int m)
{
    for (int i = 1; i <= m; i++)
    {
        if (Nroot(i, n) == m)
        {
            return i;
        }
        else if (Nroot(i, n) > m)
        {
            break;
        }
    }
    return -1;
}

int main()
{
    int n, m;
    cout << "Enter your number : ";
    cin >> n >> m;
    int ans = linearSearch(n, m);
    cout << ans;
    return 0;
}