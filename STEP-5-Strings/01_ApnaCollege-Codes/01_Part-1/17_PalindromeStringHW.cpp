#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s1)
{
    string rev = s1;
    reverse(s1.begin(), s1.end());
    if (s1 == rev)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1 = "racecar";

    cout << palindrome(s1);

    return 0;
}