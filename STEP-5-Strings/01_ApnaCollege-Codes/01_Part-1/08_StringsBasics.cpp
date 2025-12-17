#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Apna College"; // dynamic in nature => resize values at runtime
    cout << str << endl;

    str = "hello";
    cout << str << endl;

    // Can't be done in char
    // Eg
    char charArr[] = "apna college";
    // charArr = "hello" // give error : expression must be a modifiable value(arr are not dynamic in nature)
    return 0;
}