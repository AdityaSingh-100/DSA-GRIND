#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[20];

    cout << "Enter your string : ";
    cin.getline(str, 20);

    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}