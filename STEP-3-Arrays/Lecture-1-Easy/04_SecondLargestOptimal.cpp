
#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main()
{
    const int n = 6;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // One-pass traversal to find largest and second largest
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    // Output the result
    if (secondLargest == INT_MIN)
        cout << "No second largest element found (all elements may be same)." << endl;
    else
        cout << "Second Largest element: " << secondLargest << endl;

    return 0;
}
