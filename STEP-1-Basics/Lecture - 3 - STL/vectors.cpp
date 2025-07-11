#include <iostream>
#include <vector>
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

int main()
{
    explainVector();
    return 0;
}