#include <iostream>
#include <vector>
using namespace std;

vector<int> RearrangeBySign(vector<int> &arr, int n)
{

    vector<int> pos, neg;

    for (int i = 0; i < n; i++) // this is to divide the array of positives and negatives and put them in their respective places
    {

        if (arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    return arr;
}

int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    int n = arr.size();
    vector<int> ans = RearrangeBySign(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}