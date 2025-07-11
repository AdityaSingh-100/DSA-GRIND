#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int l = 0, r = n - 1;

    // while (l < r) {
    //     swap(arr[l], arr[r]);
    //     l++;
    //     r--;
    // } - - Or above this is also correct
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverseArray(arr + 1, r - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
