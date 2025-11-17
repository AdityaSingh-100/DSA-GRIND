#include <iostream>
#include <vector>
using namespace std;

int RecursiveBinarySearch(vector<int> &arr, int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (target == arr[mid])
    {
        return mid;
    }
    else if (target > arr[mid])
    {
        return RecursiveBinarySearch(arr, mid + 1, high, target);
    }
    else
    {
        return RecursiveBinarySearch(arr, low, mid - 1, target);
    }
}

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = arr.size();
    int target = 4;
    cout << RecursiveBinarySearch(arr, 0, n, target);

    return 0;
}