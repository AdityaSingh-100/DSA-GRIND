#include <iostream>
using namespace std;

void nto1(int i, int n)
{
    if (i < 1)
        return;

    nto1(i - 1, n);
    cout << i << endl;
}

int main()
{
    int n;

    cin >> n;
    nto1(n, n);

    return 0;
}