#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int mvZeroToEnd(vector<int> &arr, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // no non zero number
    if (j == -1)
        return n;

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return n;
}

int main()
{

    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();
    int k = mvZeroToEnd(arr, n);
    cout << "The array after moving zeroes to" << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}