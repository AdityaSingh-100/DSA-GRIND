
// Using Brute force
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    const int n = 6;
    int arr[n];
    int largest = 0, secondLargest = -1;

    // For taking array inputs
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array numbers : ";
        cin >> arr[i];
    }

    // For sorting the array
    // Sorting the array using Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    largest = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }
    cout << secondLargest << " ";

    return 0;
}
