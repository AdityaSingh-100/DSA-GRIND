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

    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node((arr[i]));
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertAtKth(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }
        else
        {
            return NULL;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    int cnt = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        cnt++;
        if (cnt == (k - 1))
        {
            Node *x = new Node(val);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {2, 4, 1, 8};
    Node *head = convertArrToLL(arr);

    head = insertAtKth(head, 100, 6);
    print(head);
    return 0;
}