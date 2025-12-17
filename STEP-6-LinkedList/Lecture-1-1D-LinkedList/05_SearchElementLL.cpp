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
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArrToLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int searchEleLL(Node *head, int target)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            return temp->data;
        }
        else
        {
            temp = temp->next;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, 1, 8};

    int target = 0;
    Node *head = convertArrToLL(arr);
    cout << searchEleLL(head, target);

    return 0;
}