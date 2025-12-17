#include <bits/stdc++.h>
using namespace std;

string Erase(string s, int pos)
{
    if (pos < 0 || pos > s.length())
    {
        return s;
    }
    s.erase(pos, 1);
    return s;
}

string RemoveChr(string s, char ch, int pos)
{
    int n = s.length();
    s.insert(s.begin() + pos, ch);
    return s;
}

int main()
{

    string s = "Aditya";
    int pos = 3;
    char ch = ' ';
    // cout << RemoveChr(s, ch, pos);
    cout << Erase(s, pos);
    return 0;
}