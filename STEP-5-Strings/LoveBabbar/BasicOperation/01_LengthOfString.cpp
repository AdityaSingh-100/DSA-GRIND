#include <bits/stdc++.h>
using namespace std;

int len(string s)
{
    // int len = s.length();
    int l = s.size();
    // return len;
    return l;
}

int lenManually(string s)
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{
    string s = "Aditya";
    // Indexing start from 0
    string s2 = "";

    cout << len(s) << endl;
    cout << lenManually(s) << endl;
    cout << len(s2) << endl;
    cout << lenManually(s2) << endl;
    return 0;
}