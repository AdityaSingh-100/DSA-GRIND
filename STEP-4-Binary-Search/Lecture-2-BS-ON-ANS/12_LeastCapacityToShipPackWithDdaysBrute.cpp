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
    int n = weights.size();

    // Find max element and sum
    int maxi = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, weights[i]);
        sum += weights[i];
    }

    // Try each capacity from max element to sum
    for (int capacity = maxi; capacity <= sum; capacity++)
    {
        int daysRequired = findDays(weights, capacity);
        if (daysRequired <= days)
        {
            return capacity;
        }
    }
    return -1;
}

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int ans = leastCapacity(weights, days);
    cout << "Least capacity needed: " << ans << endl;
    return 0;
}