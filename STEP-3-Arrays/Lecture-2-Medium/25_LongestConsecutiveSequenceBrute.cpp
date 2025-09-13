#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int LongestConsecutiveSequence(vector<int> &arr, int n)
{
    int x = 0, cnt, longest = 1;
    for (int i = 0; i < n; i++)
    {
        x = arr[i];
        cnt = 1;
        while (linearSearch(arr, x + 1, n) == true)
        {
            x = x + 1;
            cnt += 1;
        }
        longest = cnt; 
    }
    return longest;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = arr.size();
    cout << LongestConsecutiveSequence(arr, n);
    return 0;
}