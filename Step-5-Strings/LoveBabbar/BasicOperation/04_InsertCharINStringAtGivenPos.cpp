#include <bits/stdc++.h>
using namespace std;

string InsertAtPos(string &s, char ch, int pos)
{
    int n = s.size();
    s.insert(s.begin() + pos, ch);
    return s;
}

string InsertManually(string &s, char ch, int pos)
{

    string res = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (i == pos)
        {
            res.push_back(ch);
        }

        res.push_back(s[i]);
    }

    if (pos >= s.length())
    {
        res.push_back(ch);
    }
    return res;
}

int main()
{
    string s = "Geeks";
    char ch = 'A';
    int pos = 3;
    // cout << InsertAtPos(s, ch, pos) << endl;

    cout << InsertManually(s, ch, pos);
    return 0;
}