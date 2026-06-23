#include <bits/stdc++.h>
using namespace std;

double powerToX(double x, int n)
{
    long long N = n;

    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }

    double ans = 1;
    for (long long i = 0; i < N; i++)
    {
        ans = ans * x;
    }

    return ans;
}

int main()
{
    double x;
    int n;
    cin >> x >> n;

    cout << fixed << setprecision(4) << powerToX(x, n);
    return 0;
}