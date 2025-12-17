#include <bits/stdc++.h>
using namespace std;

string CamelCase(string s)
{
    int n = s.size();
    int pos = 0;
    string upper = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            // pos = i + 1;
            // upper = toupper(s[i + 1]);
            // s.replace(pos, 1, upper);
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    return s;
}

int main()
{
    string s = "i got intern at geeksforgeeks";
    cout << CamelCase(s);
    return 0;
}