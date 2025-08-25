#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &a1, vector<int> &a2, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        else if (a2[j] < a1[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{

    vector<int> a1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> a2 = {2, 3, 4, 5, 6, 6, 7};

    int n = a1.size();
    int m = a2.size();

    vector<int> ans = findArrayIntersection(a1, a2, n, m);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}