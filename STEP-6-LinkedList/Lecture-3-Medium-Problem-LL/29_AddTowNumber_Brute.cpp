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

Node *addTwoNumber(Node *head1, Node *head2)
{
    Node *dummyHead = new Node(-1);
    Node *curr = dummyHead;
    Node *temp1 = head1;
    Node *temp2 = head2;

    int carry = 0;
    while (temp1 != NULL || temp2 != NULL)
    {
        int sum = carry;
        if (temp1)
        {
            sum += temp1->data;
        }
        if (temp2)
        {
            sum += temp2->data;
        }
        Node *newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {
            temp2 = temp2->next;
        }
    }
    if (carry)
    {
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyHead->next;
}

int main()
{
    vector<int> arr1 = {3, 5};
    vector<int> arr2 = {4, 5, 9, 9};
    Node *head1 = convertArrToLL(arr1);
    Node *head2 = convertArrToLL(arr2);
    Node *temp = addTwoNumber(head1, head2);
    print(temp);
    return 0;
}