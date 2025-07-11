#include <iostream>
#include <vector>
using namespace std;

void RecInserSort(vector<int> &arr, int i, int n)
{
    if (i == n)
    {
        return;
    }

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    RecInserSort(arr, i + 1, n);
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {13, 46, 24, 52, 20, 9};

    cout << "Original array: ";
    printArray(arr);

    RecInserSort(arr, 0, arr.size());

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}

/*
#include <iostream>
using namespace std;

void RecInserSort(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    RecInserSort(arr, i + 1, n);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before using insertion sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    RecInserSort(arr, 0, n);
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

*/