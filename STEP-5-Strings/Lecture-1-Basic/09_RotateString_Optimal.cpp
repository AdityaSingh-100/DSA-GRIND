#include <bits/stdc++.h>
using namespace std;

bool rotateString(string &s, string &goal)
{
    if (s.length() != goal.length())
        return false;

    string doubledS = s + s;
    return doubledS.find(goal) != string::npos;
}

int main()
{
    string s = "hello";
    string goal = "lohel";

    int ans = rotateString(s, goal);
    cout << ans;
    return 0;
}