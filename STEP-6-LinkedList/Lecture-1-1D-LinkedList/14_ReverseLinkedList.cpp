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

Node *Reverse(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        return head;
    }
    Node *previous = NULL;
    Node *current = head;
    Node *forward;

    while (current != NULL)
    {
        forward = current->next;
        current->next = previous;
        previous = current;
        current = forward;
    }

    return previous;
}

void print(Node *head)
{

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{

    vector<int> arr = {2, 3, 4, 1};
    Node *Head = convertArrToLL(arr);
    Node *temp = Reverse(Head);
    print(temp);
    return 0;
}