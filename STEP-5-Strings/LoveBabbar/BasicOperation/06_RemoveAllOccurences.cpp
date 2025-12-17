#include <bits/stdc++.h>
using namespace std;

string RemoveOcurrence(string s)
{
    int n = s.length();
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        // if (s[i] == 'e' )
        // {
        //     s[i] = ' ';
        // }
        if (s[i] != 'e')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

string Fn(string s)
{

    string s = "ababca";
    char c = 'a';

    // Remove all occurrences of 'c' from 's'
    s.erase(remove(s.begin(), s.end(), c), s.end());

    cout << s;
}

int main()
{
    string s = "geeksforgeeks";
    cout << RemoveOcurrence(s);
    return 0;
}