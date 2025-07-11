#include <iostream>
#include <map>
using namespace std;

//* Map Container - stores values in {key,values} pair where key is unique and it can be any data structure

void explainMap()
{
    // 1 key 1 value
    map<int, int> mpp;

    // 1 key, 2 values
    map<int, pair<int, int>> mpp;

    // 2 key, 1 value both are integers
    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    // mpp.emplace({3, 1});

    mpp.insert({2, 4});

    // mpp[{2, 3}] = 10;
    //      2 keys   1 value  these can be stores like this

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 as nothing in there

    // To know location of the iterator or address
    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);

    // This is the syntax

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

int main()
{
    explainMap();
    return 0;
}