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

Node *sort0s1s2s(Node *head)
{
    if (!head || !head->next)
        return head;

    Node *zeroHead = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *TwoHead = new Node(-1);

    Node *zero = zeroHead;
    Node *one = oneHead;
    Node *two = TwoHead;

    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero->next = temp;
            zero = temp;
        }
        else if (temp->data == 1)
        {
            one->next = temp;
            one = temp;
        }
        else
        {
            two->next = temp;
            two = temp;
        }
        temp = temp->next;
    }

    zero->next = (oneHead->next) ? oneHead->next : TwoHead->next;

    one->next = TwoHead->next;

    two->next = nullptr;

    Node *newHead = zeroHead->next;
    delete (zeroHead, oneHead, TwoHead);
    return newHead;
}

int main()
{
    vector<int> arr = {1, 0, 1, 2, 0, 2, 1};
    Node *head = convertArrToLL(arr);
    Node *temp = sort0s1s2s(head);
    print(temp);
    return 0;
}