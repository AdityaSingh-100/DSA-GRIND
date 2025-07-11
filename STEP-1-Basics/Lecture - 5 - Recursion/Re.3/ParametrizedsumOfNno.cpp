#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
    // if (n == 1)
    //     return 0;
    // return n * factorial(n - 1);
}
//* Time complexity --> O(N)
//* Space complexity --> O(N)

int main()
{
    int n = 3;
    // cout << sum(n);
    cout << factorial(n);
    return 0;
}