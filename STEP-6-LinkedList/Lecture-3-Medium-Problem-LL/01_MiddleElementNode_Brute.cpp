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
        mover = temp;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *MiddleNode(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    int middleNode = (int)((cnt) / 2) + 1;

    temp = head;
    cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == middleNode)
        {
            while (temp != nullptr)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            break;
        }
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    MiddleNode(head);
    // print(head);
    return 0;
}