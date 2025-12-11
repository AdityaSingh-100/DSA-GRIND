#include <bits/stdc++.h>
using namespace std;

bool isAlphaNumeric(char ch)
{

    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isValidPalindrome(string s)
{
    int st = 0, end = s.length() - 1;
    while (st < end)
    {
        if (!isAlphaNumeric(s[st]))
        {
            st++;
            continue;
        }
        if (!isAlphaNumeric(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main()
{
    string s1 = "Ac3?e3c&a";
    cout << isValidPalindrome(s1);
    return 0;
}