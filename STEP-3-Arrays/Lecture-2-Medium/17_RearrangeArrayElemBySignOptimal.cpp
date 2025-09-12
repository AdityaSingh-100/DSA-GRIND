#include <iostream>
#include <vector>
using namespace std;

vector<int> RearrangeArrayBySign(vector<int> &arr, int n)
{

    vector<int> ans(n, 0);

    int posIndex = 0, negIndex = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    int n = arr.size();
    vector<int> ans = RearrangeArrayBySign(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}