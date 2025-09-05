#include <iostream>
#include <vector>
using namespace std;

void SortArray(vector<int> &arr, int n)
{
    int cnt0 = 0, cnt1 = 1, cnt2 = 2;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cnt0++;
        else if (arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }
    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }
    for (int i = cnt0 + cnt1; i < n; i++)
    {
        arr[i] = 2;
    }
}

int main()
{
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = arr.size();

    SortArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}