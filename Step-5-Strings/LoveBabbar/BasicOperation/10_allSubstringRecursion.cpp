#include <bits/stdc++.h>
using namespace std;

void subString(string &s, int n, int index, string &curr, vector<string> &res)
{
    if (index == n)
        return;

    curr.push_back(s[index]);

    res.push_back(curr);

    subString(s, n, index + 1, curr, res);

    curr.pop_back();

    if (curr.empty())
    {
        subString(s, n, index + 1, curr, res);
    }
}

vector<string> findSubstring(string s)
{
    vector<string> res;

    string curr = "";
    subString(s, s.length(), 0, curr, res);
    return res;
}

int main()
{
    string s = "abc";
    vector<string> ans = findSubstring(s);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}