#include <iostream>
using namespace std;
int main()
{
    const int n = 5;

    int arr[n];

    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter numbers : ";
        cin >> arr[i];
    }

    largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest element: " << largest << endl;

    return 0;
}