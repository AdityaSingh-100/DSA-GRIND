// Includes and namespaces
// #include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include <vector>
#include <stack>
#include <deque>
#include <list>
#include <queue>
#include <set>
using namespace std;

// Function declarations
void explainPairs();
void explainVector();
void explainList();
void explainDeque();
void explainStack();
void explainQueue();
void explainPQ();
void explainSet();
void explainMultiset();
void explainUSet();
void explainMap();
void explainMultimap();
void explainUnorderedMap();
bool comp(pair<int, int> p1, pair<int, int> p2);
void explainExtra();

// void print()
// {
//     cout << "Aditya";
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     print();

//     int s = sum(1, 5);
//     // Prints 6
//     cout << endl
//          << s;

//     return 0;
// }

//* Cpp STL
/*

Algorithms
Containers
Function
Iterators


*/

// Pairs

void explainPairs()
{
    //     pair<int, int> p = {1, 3};

    //     cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;

    // pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    // cout << arr[1].second;
}

// Vectors - Containers
// Similar to array but stores data dynamically matlb apne hisab se memory space increase kar sakta h
void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    v.push_back({1, 2});  // here input pairs is given in curly braces
    v.emplace_back(1, 2); // But in emplace_back its given in normal braces and it assumes it as pairs when we talk about emplace back

    vector<int> v(5, 100); // --> this will create a container which consist of 5 values like {100,100,100,100,100}

    vector<int> v(5); // --> This creates a container consist of 5 values which consist of garbage values

    vector<int> v1(5, 20); // {20,20,20,20,20}
    vector<int> v2(v1);    // {20,20,20,20,20}

    // Iterator - points to the memory where your item is lying

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // end -- it points to memory location right after the last element
    //                                                      which means it-- to get the last position

    // {10,20,30,40}
    vector<int>::iterator it = v.rend(); // Reverse end points to left side of first of position

    vector<int>::iterator it = v.rbegin(); // Reverse begin points to last item position like 40 in this case
    // Like if we do it++ so it moves to 30 which means its an reverse iterator

    cout << v[0] << " " << v.at(0);
    // {10,20,30}
    cout << v.back() << " "; // it points to 30 element in given

    // now to print these vector 1) using their indexes , 2) using iterators

    for (vector<int>::iterator it = v.begin(); it != v.begin(); it++)
    {
        cout << *(it) << " ";
    }

    // Use auto function where we shoud not have to write( vector<int>::iterator)
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    // Consider if you dont know the datatype to cpp will check for the datatype in the vector automatically

    for (auto it : v) // for each means it iterates on the datatype like 1 then 2 then 3
    {
        cout << it << " ";
    }

    //* Deletion in vector

    // {10,20,12,23}
    v.erase(v.begin() + 1); // -> erases 20 in the vector

    // {10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35} [start,end) [ - included ) - not included

    //* Insert Function

    vector<int> v(2, 100); // {100,100}

    v.insert(v.begin() + 1, 2, 10); // {300,10,10,100,100}

    vector<int> copy(2, 50);                       // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50 , 50, 300 , 10, 10, 100, 100}

    // {10,20}
    cout << v.size(); // 2 --> size gives how many elements are there in vector

    // {10,20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30,40}, v2 -> {10,20}

    v.clear(); // erases the entire vector

    cout << v.empty; // if 1 element - true if empty - false
}

//* List

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(); // {2, 4};

    // rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

//* Deque - container similar to list and vector

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();  // {3 , 4, 1}
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend , clear, insert, size, swap
}

//* Stack - LIFO
void explainStack()
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2, 1}
    st.push(3);    // { 3, 2, 1}
    st.push(3);    // {3, 3, 2, 1}
    st.emplace(5); // {5, 3 ,3, 2, 1}

    cout << st.top(); // print 5 "88 st[2] is invalid **"

    st.pop(); // st looks like {3, 3, 2, 1}

    cout << st.top(); // 3

    cout << st.size(); // 4

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

//* Queue - FIFO

void explainQueue()
{
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1 ,2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5;

    cout << q.back(); // print 9

    // Q is {1, 2, 9}
    cout << q.front(); // prints 1

    q.pop(); // {2, 9}

    cout << q.front(); // prints 2

    // size swap empty same as stack
}

//* Priority Queue - Guy who has the largest value stays at the top

void explainPQ()
{
    priority_queue<int> pq;
    // Max heap
    pq.push(5);     // {5}
    pq.push(2);     // {5 ,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    cout << pq.top(); // prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2,5}
    pq.push(8);     // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2

    // * Time complexity
    /*
    Push --> log(n)
    top  --> 0(1)
    pop  --> log(n)
    */
}

//* Set Container -- stores in order and unique

void explainSet()
{
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1,2 ,3 ,4}

    // Functionality of insert in vector
    // can be used also , that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);

    // {1,4,5}
    st.erase(5); // erases 5 //* takes logarithm time

    int cnt = st.count(1); // if 1 is there in the set it will give true else it give false

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1 ,2 , 3, 4 ,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first , last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
}

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

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all function same as set
}

//* Unordered Set

void explainUSet()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function
    // does not works, rest all function are same
    // as above , it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
}

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
    mpp.emplace({3, 1});

    mpp.insert({2, 4});

    mpp[{2, 3}] = 10;
    //      2 keys   1 value  these can be stores like this

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 as nothing in there

    // To know location of the iterator or address
    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);

    // This is the syntax

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

//* MultiMap
void explainMultimap()
{
    // everthing same as map, only it can store multiple/duplicate keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap()
{
    // same as set and unordered_Set difference
    // map works in logarithm time and unorderedmap works in constant time
}

//  so upto this we have learned Containers and iterators

//* Algoriths

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // if above not true then they are same

    if (p1.first > p2.first)
        return true;
    return false;
}

void explainExtra()
{
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>); // Sort in descending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same , then sort
    // it according to first element but in descending

    sort(a, a + n, comp);
    // Comparators
    // {4,1}, {2,1}, {1,2};

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();
    // if no is long it becomes builtin popcount longlong

    string s = "123";
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}

int main()
{

    return 0;
}