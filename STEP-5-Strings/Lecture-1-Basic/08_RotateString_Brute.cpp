#include <bits/stdc++.h>
using namespace std;

bool rotateString(string &s, string &goal)
{
    if (s.length() != goal.length())
    {
        return false;
    }

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        string rotated = s.substr(i) + s.substr(0, i);
        if (rotated == goal)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s = "hello";
    string goal = "lohel";

    int ans = rotateString(s, goal);
    cout << ans;
    return 0;
}