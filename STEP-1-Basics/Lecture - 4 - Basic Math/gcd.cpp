#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b & a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
        
}

int main()
{
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    return 0;
}