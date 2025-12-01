#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 3, 5, 8, 8, 10, 10, 11};
    int n = 1;

    cout << lower_bound(arr.begin(), arr.end(), n) - arr.begin();
    

    return 0;
}