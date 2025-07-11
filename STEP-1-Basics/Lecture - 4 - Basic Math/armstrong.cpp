#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int armstrong(int n)
{
    int revNum = 0, lastDigit = 0, sum = 0, dup = n;
    while (n > 0)
    {
    
        lastDigit = n % 10;
        sum = sum + (lastDigit * lastDigit * lastDigit);
        n = n / 10;
    }
    if (sum == dup)
        cout << "True";
    else
        cout << "false";
}

int main()
{
    armstrong(1634);
    return 0;
    }