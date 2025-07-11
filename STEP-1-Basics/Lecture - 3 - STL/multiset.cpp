#include <iostream>
#include <set>

using namespace std;

//* Multiset
void explainMultiset()
{
    // Everything same as set(not unique as set)
    // Only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all function same as set
}

int main()
{
    explainMultiset();
    return 0;
}