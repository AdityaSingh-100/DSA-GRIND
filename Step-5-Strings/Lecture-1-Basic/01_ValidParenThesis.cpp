#include <bits/stdc++.h>
using namespace std;

string validParenThesis(string str)
{
    int n = str.length();
    string ans = "";
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ')')
        {
            cnt--;
        }
        if (cnt > 0)
        {
            ans += str[i];
        }
        if (str[i] == '(')
        {
            cnt++;
        }
    }
    return ans;
}

int main()
{
    string str = "((()))";
    cout << validParenThesis(str);
    return 0;
}