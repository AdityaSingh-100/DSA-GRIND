#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> moveZeroesToEnd(int n, vector<int> arr)
{

    vector<int> temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    // number of non-zero elements
    int nonZero = temp.size();

    // copy elements from temp
    // fill first nz fields of
    // original array:
    for (int i = 0; i < nonZero; i++)
    {
        arr[i] = temp[i];
    }

    // fill rest of the cells with 0:
    for (int i = nonZero; i < n; i++)
    {
        arr[i] = 0;
    }
    return arr;
}

int main()
{

    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    int n = arr.size();

    vector<int> ans = moveZeroesToEnd(n, arr);
    for (auto &it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}