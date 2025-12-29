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

Node *sortLL(Node *head)
{
    vector<int> arr = {};

    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
        
    }
    sort(arr.begin(), arr.end());

    temp = head;
    int i = 0;
    while (temp != NULL && temp->next != NULL)
    {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 4, 3, 1, 5};
    Node *head = convertArrToLL(arr);
    Node *temp = sortLL(head);
    print(temp);
    return 0;
}