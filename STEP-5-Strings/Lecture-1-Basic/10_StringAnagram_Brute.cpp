#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    sort(s1.begin(), s1.end());// nlogn
    sort(s2.begin(), s2.end()); // nlogn

    for (int i = 0; i < s1.length(); i++) // O(n)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "CAT";
    string s2 = "ACT";
    int ans = checkAnagram(s1,s2);
    cout << ans;
    return 0;
}