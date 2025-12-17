#include <bits/stdc++.h>
using namespace std;

int SearchStr(string s, char ch)
{
    int n = s.length();
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            index = i;
            break;
        }
    }
    return index;
}

int SearchFn(string s, char ch)
{
    int index = s.find(ch);
    return index;
}

int main()
{

    string s = "geeksforgeeks";
    char ch = 'k';
    cout << SearchStr(s, ch) << endl;
    cout << SearchFn(s, ch);
    return 0;
}