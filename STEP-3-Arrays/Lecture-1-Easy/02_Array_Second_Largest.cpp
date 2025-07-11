
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

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 6;
//     int arr[n];
//     int largest = 0, secondLargest = -1;

//     // Taking array inputs
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter array numbers : ";
//         cin >> arr[i];
//     }

//     // Sorting the array using Bubble Sort
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // The largest element is now the last one
//     largest = arr[n - 1];

//     // Find the second largest by checking from the second last element backwards
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (arr[i] != largest)
//         {
//             secondLargest = arr[i];
//             break;
//         }
//     }

//     // Output the results
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     if (secondLargest != -1)
//         cout << "Second Largest element: " << secondLargest << endl;
//     else
//         cout << "All elements are the same. No second largest element." << endl;

//     return 0;
// }
