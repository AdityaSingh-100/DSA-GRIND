#include <bits/stdc++.h>
using namespace std;

// int uniqueLinearSearch(vector<int> arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt++;
//             }
//         }
//         if (cnt == 1)
//             return arr[i];
//     }
// }

// int hashing(vector<int> &arr, int n)
// {
//     unordered_map<int, int> mpp;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }

//     for (int x : arr)
//         if (mpp[x] == 1)
//             return x;

//     return -1;
// }



int XOR(vector<int> &arr, int n)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int n = arr.size();
    // int ans = uniqueLinearSearch(arr, n);
    // int ans = hashing(arr, n);
    int ans = XOR(arr, n);
    cout << ans;

    return 0;
}