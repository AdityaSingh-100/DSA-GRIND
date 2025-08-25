#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> UnionSorted(vector<int> &a1, vector<int> &a2)
{
    int n1 = a1.size();
    int n2 = a2.size();

    set<int> st;

    for (int i = 0; i < n1; i++)
    {
        st.insert(a1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(a2[i]);
    }

    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}

int main()
{
    vector<int> a1 = {1, 1, 2, 3, 4, 5};
    vector<int> a2 = {2, 3, 4, 4, 5, 6};

    vector<int> ans = UnionSorted(a1, a2);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}