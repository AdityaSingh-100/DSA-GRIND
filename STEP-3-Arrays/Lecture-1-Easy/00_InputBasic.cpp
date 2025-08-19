#include <iostream>
using namespace std;

int main()
{
    const int n = 5;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
