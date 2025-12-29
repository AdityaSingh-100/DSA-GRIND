#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    int freq[26] = {0};
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        freq[s1[i] - 'A']++;
    }

    for (int i = 0; i < n; i++)
    {
        freq[s2[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0) // If any frequency is non-zero, they are not anagrams
            return false;
    }

    return true;
}

int main()
{
    string s1 = "CAT";
    string s2 = "AC";
    int ans = checkAnagram(s1, s2);
    cout << ans;
    return 0;
}