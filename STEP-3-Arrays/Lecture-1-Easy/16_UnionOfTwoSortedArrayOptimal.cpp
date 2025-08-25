#include <iostream>
#include <vector>
using namespace std;

vector<int> UnionSortedOptimal(vector<int> &a1, vector<int> &a2)
{

    int n1 = a1.size();
    int n2 = a2.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a1[i])
            {
                unionArr.push_back(a1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != a2[j])
            {
                unionArr.push_back(a2[j]);
            }
            j++;
        }
    }
    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != a2[j])
        {
            unionArr.push_back(a2[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a1[i])
        {
            unionArr.push_back(a1[i]);
        }
        i++;
    }
    return unionArr;
}

int main()
{

    vector<int> a1 = {1, 1, 2, 3, 4, 5};
    vector<int> a2 = {2, 3, 4, 4, 5, 6};

    vector<int> ans = UnionSortedOptimal(a1, a2);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}