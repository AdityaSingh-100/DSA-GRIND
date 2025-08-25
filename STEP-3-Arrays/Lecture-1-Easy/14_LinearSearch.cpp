#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> &arr, int n, int num)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {

            return i;
        }
    }

    return -1;
}

int main()
{

    vector<int> arr = {6, 7, 8, 9, 4};
    int num, n = arr.size();

    cout << "Enter the number you want to find" << endl;

    cin >> num;

    cout << LinearSearch(arr, n, num);
}