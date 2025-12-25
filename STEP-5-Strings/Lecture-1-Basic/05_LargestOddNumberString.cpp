#include <bits/stdc++.h>
using namespace std;

string largestOddNo(string s)
{
    int ind = -1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if ((s[i] - '0') % 2 == 1)
        {
            ind = i;
            break;
        }
    }
    int i = 0;
    while (i <= ind && s[i] == '0')
        i++;

    return s.substr(i, ind - i + 1);
}

int main()
{
    string s = "0214638";
    string ans = largestOddNo(s);

    cout << ans;
    return 0;
}