#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int LongestConsecutiveSequence(vector<int> &arr, int n)
{

    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end()) // this run only when let say it = 100 and it - 1 = 99 not exist in set
        // then it goes inside the if condition
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 1, 101, 3, 2, 1, 1};
    int n = arr.size();
    cout << LongestConsecutiveSequence(arr, n);
    return 0;
}