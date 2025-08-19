#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your array no " << i + 1 << ":";
        cin >> arr[i];
    }

    // To left rotate
    int x = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = x;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}