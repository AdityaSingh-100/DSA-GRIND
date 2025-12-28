#include <bits/stdc++.h>
using namespace std;

string LongestCommonPrefix(vector<string> str)
{
  if (str.empty()) return "";
    
    sort(str.begin(), str.end());
    string s1 = str[0];
    string s2 = str[str.size() - 1];
    int i = 0;
    
    while (i < s1.length() && i < s2.length() && s1[i] == s2[i])
    {
        i++;
    }
    
    return s1.substr(0, i);
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    cout << LongestCommonPrefix(str);
    return 0;
}