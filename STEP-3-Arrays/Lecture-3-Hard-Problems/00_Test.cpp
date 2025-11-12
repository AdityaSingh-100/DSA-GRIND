#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    for (auto it : arr)
    {
        cout << it << endl;
    }

    return 0;
}