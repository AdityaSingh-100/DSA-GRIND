#include <bits/stdc++.h>
using namespace std;

string RemoveAlloccurences(string s1, string part)
{
    int substrlen = part.length();

    while (s1.length() > 0 && s1.find(part) < s1.length())
    {
        s1.erase(s1.find(part), substrlen);
    }
    return s1;
}

int main()
{
    string s1 = "daabcbaabcbc";
    string part = "abc";
    cout << RemoveAlloccurences(s1, part);
    return 0;
}