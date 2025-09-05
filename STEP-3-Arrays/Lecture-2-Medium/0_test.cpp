#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr(n, 1);
    for (auto it : arr)
    {
        cout << it << endl;
    }
    return 0;
}
