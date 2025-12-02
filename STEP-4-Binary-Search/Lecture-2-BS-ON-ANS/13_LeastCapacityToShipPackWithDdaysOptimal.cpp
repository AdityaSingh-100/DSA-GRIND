#include <bits/stdc++.h>
using namespace std;

int findDays(vector<int> &weights, int capacity)
{
    int n = weights.size();
    int day = 1, load = 0;
    for (int i = 0; i < n; i++)
    {
        if (load + weights[i] > capacity)
        {
            day = day + 1;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }
    return day;
}

int leastCapacity(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int numberOfDays = findDays(weights, mid);
        if (numberOfDays <= days)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int ans = leastCapacity(weights, days);
    cout << "Least capacity needed: " << ans << endl;
    return 0;
}