#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Using for Loop
    char s1[] = "Aditya";

    int len = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        cout << s1[i];
    }
    cout << endl;

    int start = 0, end = len - 1;
    while (start < end)
    {
        char temp = s1[start];
        s1[start] = s1[end];
        s1[end] = temp;
        start++, end--;
    }
    cout << s1;

    return 0;
}