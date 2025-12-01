#include <iostream>
#include <vector>
using namespace std;

int SearchInsertPos(vector<int> &arr, int n, int target)
{
    int ans = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {1, 2, 4, 7};
    int target = 2;
    int n = arr.size();
    int result = SearchInsertPos(arr, n, target);

    cout << result;
    return 0;
}