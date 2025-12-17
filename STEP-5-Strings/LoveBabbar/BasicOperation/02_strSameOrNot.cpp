#include <bits/stdc++.h>
using namespace std;

string Same(string s1, string s2)
{
    if (s1 == s2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "false";
    }
}

string SameFn(string s1, string s2)
{
    if (s1.compare(s2) == 0)
    {
        return "Same";
    }
    else
    {
        return "false";
    }
}

int main()
{
    string s1 = "Same";
    string s2 = "Same";
    cout << Same(s1, s2) << endl;

    cout << SameFn(s1, s2);
    return 0;
}