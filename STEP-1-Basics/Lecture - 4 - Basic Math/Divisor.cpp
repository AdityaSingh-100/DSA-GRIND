#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int Divisor(int n)
{
    // i <= sqrt(n) we can also write i*i <=n
    vector<int> ls;
    // O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
                ls.push_back(n / i);
        }
    }
    // O(no of factors * log no of factors ): n is the number of factors
    sort(ls.begin(), ls.end());
    for (auto it : ls)
        cout << it << " ";
}

int main()
{
    Divisor(36);
    return 0;
}