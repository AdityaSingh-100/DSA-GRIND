#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    int m1[256] = {0}, m2[256] = {0};

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (m1[s[i]] != m2[t[i]])
        {
            return false;
        }

        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
}

int main()
{
    string s = "foo";
    string t = "bar";
    int ans = isIsomorphic(s, t);
    cout << ans;
    return 0;
}