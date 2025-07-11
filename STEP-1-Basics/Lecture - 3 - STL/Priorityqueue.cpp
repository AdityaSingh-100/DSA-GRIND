#include <iostream>
#include <queue>
using namespace std;

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

int main()
{
    explainPQ();
    return 0;
}