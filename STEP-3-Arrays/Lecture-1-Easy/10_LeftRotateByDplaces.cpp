#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    d = d % n; // will give remainder
    int temp[d];

    for (int i = 0; i < d; i++)
    {

        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main()
{

    // int n;
    // cin >> n;
    const int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your array no " << i + 1 << ":";
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}