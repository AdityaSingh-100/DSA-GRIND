#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int> &arr, int n, int target)
{

    // Binary Search Logic
    int low = 0, high = n - 1, mid = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = arr.size();
    int target = 13;
    cout << BinarySearch(arr, n, target);
    return 0;
}