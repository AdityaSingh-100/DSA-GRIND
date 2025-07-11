#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int revN(int n)
{
    int revNum = 0, lastDigit = 0;
    while (n > 0)
    {
        lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    cout << revNum;
}
int main()
{
    revN(7789);
    return 0;
}