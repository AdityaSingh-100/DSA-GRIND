#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; // to update the mover like incrementing it
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 1, 3, 8};
    Node *head = convertArrToLL(arr);
    // cout << head->data;

    cout << head->data;



    return 0;
}