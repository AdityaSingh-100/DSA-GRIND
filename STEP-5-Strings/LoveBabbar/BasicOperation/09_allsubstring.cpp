#include <bits/stdc++.h>
using namespace std;

vector<string> findSubstring(string &s)
{
    vector<string> res;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            res.push_back(s.substr(i, j - i + 1));
        }
    }
    return res;
}






int main()
{
    string s = "abc";
    vector<string> res = findSubstring(s);
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}