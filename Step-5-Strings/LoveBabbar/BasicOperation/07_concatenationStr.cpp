#include <bits/stdc++.h>
using namespace std;

string Add(string s1, string s2)
{

    string s3 = s1 + " " + s2;
    return s3;
}

int main()
{
    string s1 = "Aditya";
    string s2 = "Singh";
    cout << Add(s1, s2);
    return 0;
}