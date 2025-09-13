#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nextPermutation(vector<int> &arr)
{
    next_permutation(arr.begin(), arr.end());
}

int main()

{
    vector<int> arr = {3, 1, 2};
    nextPermutation(arr);
    for (auto it : arr)
    {
        cout << it << " "; 
    }

    return 0;
}