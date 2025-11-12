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

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << 1 << " ";
    for (int col = 2; col < n; col++)
    {
        cout << ncr(n - 1, col - 1) << " ";
    }
    cout << 1;
    return 0;
}