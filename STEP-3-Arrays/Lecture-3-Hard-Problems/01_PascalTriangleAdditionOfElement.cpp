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
    int n, r;
    cout << "Enter n's value : ";
    cin >> n;
    cout
        << "Enter r's value :";
    cin >> r;
    cout << ncr(n - 1, r - 1);
    return 0;
}