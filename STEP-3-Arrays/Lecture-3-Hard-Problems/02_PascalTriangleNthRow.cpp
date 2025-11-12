#include <iostream>
using namespace std;

int ncr(int n, int r)
{

    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
// This solution is extreme brute force
int main()
{
    int n;
    cout << "Enter row number (1-indexed): ";
    cin >> n;

    for (int c = 1; c <= n; c++)
    {
        cout << ncr(n - 1, c - 1) << " ";
    }

    cout << endl;
    return 0;
}
