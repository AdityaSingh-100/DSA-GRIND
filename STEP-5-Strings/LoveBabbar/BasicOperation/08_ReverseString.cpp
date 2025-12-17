#include <bits/stdc++.h>
using namespace std;

string revStr(string s)
{
    string ans = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {

        ans += s[i];
    }
    return ans;
}

string twoPtr(string s)
{
    int start = 0, end = s.length() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
int main()
{

    string s = "Aditya";
    // reverse(s.begin(), s.end());
    // cout << s;

    // cout << revStr(s);

    cout << twoPtr(s);
    return 0;
}