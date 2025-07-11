#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];

    unordered_map<int, int> mpp; // Will not store in order
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // O(1)
        mpp[arr[i]]++;
    }
    // Pre compute

    // iterate in the map
    // for (auto it : mpp)
    // {
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // Fetch
        cout << mpp[number] << endl;
    }

    return 0;
}