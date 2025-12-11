#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Aditya";

    for (int i = s1.length() - 1; i >= 0; i--)
    {
        cout << s1[i];
    }
    cout << endl;

    int start = 0, end = s1.length() - 1;
    while (start < end)
    {
        swap(s1[start], s1[end]);
        start++, end--;
    }
    cout << s1 << endl;

    reverse(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}