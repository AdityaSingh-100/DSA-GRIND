#include <iostream>
#include <vector>
using namespace std;

int BestTimeToBuyAndSellStocks(vector<int> &arr, int n)
{

    int mini = arr[0], profit = 0, cost = 0;
    for (int i = 1; i < n; i++)
    {
        cost = arr[i] - mini;
        profit = max(profit, cost);

        mini = min(mini, arr[i]);
    }
    return profit;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6};
    int n = arr.size();
    int ans = BestTimeToBuyAndSellStocks(arr, n);
    cout << ans;
    return 0;
}