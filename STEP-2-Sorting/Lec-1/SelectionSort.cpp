#include <iostream>
using namespace std;

// Initial Array: [11, 54, 24, 12, 75, 37]

// Pass 1 (i=0): Find minimum in [11, 54, 24, 12, 75, 37]
//               Mini found: 11 at index 0
//               Swap: No swap needed (already at position 0)
//               Result: [11, 54, 24, 12, 75, 37]

// Pass 2 (i=1): Find minimum in [54, 24, 12, 75, 37]
//               Mini found: 12 at index 3
//               Swap: 54 ↔ 12
//               Result: [11, 12, 24, 54, 75, 37]

// Pass 3 (i=2): Find minimum in [24, 54, 75, 37]
//               Mini found: 24 at index 2
//               Swap: No swap needed (already at position 2)
//               Result: [11, 12, 24, 54, 75, 37]

// Pass 4 (i=3): Find minimum in [54, 75, 37]
//               Mini found: 37 at index 5
//               Swap: 54 ↔ 37
//               Result: [11, 12, 24, 37, 75, 54]

// Pass 5 (i=4): Find minimum in [75, 54]
//               Mini found: 54 at index 5
//               Swap: 75 ↔ 54
//               Final: [11, 12, 24, 37, 54, 75]
// */
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++) // [11,54,24,12,75,37]
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // for taking input for the array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);

    // for printing the sorted elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}