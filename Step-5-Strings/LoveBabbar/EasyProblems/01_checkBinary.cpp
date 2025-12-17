#include <bits/stdc++.h>
using namespace std;

bool binaryCheck(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "010101010";
    string s2 = "0202asfdaa";
    cout << binaryCheck(s) << endl;
    cout << binaryCheck(s2) << endl;
    return 0;
}