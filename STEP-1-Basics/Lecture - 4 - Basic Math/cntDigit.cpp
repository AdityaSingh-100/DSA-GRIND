#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int cnt(int n)
{
    int cnt = 0;
    int lastDigit = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        cnt = cnt + 1;
        n = n / 10;
    }
    cout << cnt;
}

int cnt2(int n)
{
    int cnt = (int)(log10(n) + 1);
    cout << cnt;
}

int main()

{

    cnt(662);
    // cnt2(662);
    return 0;
}