// Print name n times using recursion

#include <iostream>
using namespace std;

void print(int i, int n)
{

    if (i < n)
        return;
    cout << i << endl;
    print(i -1 , n);
}

int main()
{

    int i;
    cin >> i;
    print(i, 1);
    return 0;
}