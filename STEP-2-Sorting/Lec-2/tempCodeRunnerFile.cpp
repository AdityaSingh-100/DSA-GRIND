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
