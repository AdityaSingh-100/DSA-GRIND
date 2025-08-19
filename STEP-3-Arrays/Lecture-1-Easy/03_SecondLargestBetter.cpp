#include <iostream>
using namespace std;
int main()
{

    const int n = 6;
    int arr[n]; // [1,2,4,7,7,5]

    int largest = 0, slargest = -1;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array Numbers : ";
        cin >> arr[i];
    }

    // First pass

    largest = arr[0]; // [1]
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest) // [1] > [1] --> [2] > [1] --> [4] > [2] --> [7] > [4] --> [7] > [7] --> [5] > [4]
        {
            largest = arr[i]; // 2(largest) <-- 1
        }
    }

    // Second Pass
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }
    cout << "Second Largest " << slargest;

    return 0;
}