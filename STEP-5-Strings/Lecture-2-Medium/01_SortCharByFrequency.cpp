#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int, char> p1, pair<int, char> p2)
{
    if (p1.first > p2.first)
        return true;
    if (p1.first < p2.first)
        return false;
    return p1.second < p2.second;
}

vector<char> frequencySort(string &s)
{
    pair<int, char> freq[26];

    for (int i = 0; i < 26; i++)
    {
        freq[i] = {0, i + 'a'};
    }

    for (char ch : s)
    {
        freq[ch - 'a'].first++; // convert character to index ch-'a' --> 'a'-'a' = 0, 'b' -'a' = 1
        // 't' - 'a' = 19
    }

    sort(freq, freq + 26, comparator);

    vector<char> ans;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i].first > 0)
        {
            ans.push_back(freq[i].second);
        }
    }
    return ans;
}

int main()
{
    string s = "tree";
    auto ans = frequencySort(s);
    for (auto it : ans)
    {
        cout << it;
    }
    return 0;
}