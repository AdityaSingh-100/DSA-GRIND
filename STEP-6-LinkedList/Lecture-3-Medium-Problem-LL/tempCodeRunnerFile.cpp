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

Node *DeleteMiddleNode(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    int middleNode = (int)((cnt) / 2);

    temp = head;
    while (temp != nullptr)
    {
        middleNode = middleNode - 1;
        if (middleNode == 0)
        {

            Node *prev = temp->next;
            temp->next = temp->next->next;
            free(prev);
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    Node *temp = DeleteMiddleNode(head);
    print(temp);
    return 0;
}