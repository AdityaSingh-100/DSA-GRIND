#include <iostream>
#include <vector>
using namespace std;

// Recursive Bubble Sort function
void bubbleSortRecursive(vector<int> &arr, int n)
{
    // Base Case: If array size is 1, return
    if (n == 1)
        return;

    // Step 1: Go through the array and swap adjacent elements if needed
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // Step 2: Recursively call the function for the reduced array
    bubbleSortRecursive(arr, n - 1);
}

// Function to print the vector
void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    vector<int> arr = {5, 3, 8, 6, 2}; // Example vector

    cout << "Original array: ";
    printArray(arr);

    // Call recursive Bubble Sort
    bubbleSortRecursive(arr, arr.size());

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}

#include <iostream>
using namespace std;

void RecBubbleSort(int arr[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
    RecBubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before using Bubble sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    RecBubbleSort(arr, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}




//* more optimized

// #include <iostream>
// using namespace std;

// void bubble_sort(int arr[], int n)
// {
//     // Base Case: range == 1.
//     if (n == 1)
//         return;

//     int didSwap = 0;
//     for (int j = 0; j <= n - 2; j++)
//     {
//         if (arr[j] > arr[j + 1])
//         {
//             int temp = arr[j + 1];
//             arr[j + 1] = arr[j];
//             arr[j] = temp;
//             didSwap = 1;
//         }
//     }

//     // if no swapping happens.
//     if (didSwap == 0)
//         return;

//     // Range reduced after recursion:
//     bubble_sort(arr, n - 1);
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using Bubble Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubble_sort(arr, n);
//     cout << "After Using bubble sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }
