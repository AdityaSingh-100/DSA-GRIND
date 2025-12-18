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

Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

Node *removeKthElement(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    Node *temp = head;
    Node *prev = NULL;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeValue(Node *head, int value)
{
    if (head == NULL)
        return head;

    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    Node *temp = head;
    Node *prev = NULL;
    int cnt = 0;
    while (temp != nullptr)
    {
        cnt++;
        if (temp->data == value)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);
    return temp;
}

Node *insertAtEnd(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

int main()
{
    vector<int> arr = {2, 4, 1, 8};
    Node *head = convertArrToLL(arr);

    head = insertAtEnd(head, 100);
    print(head);
    return 0;
}