#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nextPermutation(vector<int> &arr)
{
    int index = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
    }

    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {   
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
}

int main()

{
    vector<int> arr = {2, 1, 5, 4, 3, 0, 0};
    nextPermutation(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}