#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    vector<string> words;
    string word = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }
        else if (!word.empty())
        {
            words.push_back(word);
            word = ""; // pushes every word into a vector
            // ["amazing", "coding", "skills"]
        }
    }

    // Push last word (important)
    if (!word.empty())
    {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());
    // after ["skills", "coding", "amazing"]

    string result = "";
    for (int i = 0; i < words.size(); i++)
    {
        result += words[i];
        if (i < words.size() - 1)
            result += " ";
    }

    return result;
}

int main()
{

    string s = " amazing coding skills ";
    cout << reverseWords(s) << endl;
    return 0;
}
