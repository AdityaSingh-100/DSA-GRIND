#include <iostream>
#include <vector>
using namespace std;

vector<int> printLeadersByBruteForce(vector<int> &arr, int n)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        bool leader = true;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {10, 22, 12, 3, 0, 6};

    int n = arr.size();
    vector<int> ans = printLeadersByBruteForce(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}