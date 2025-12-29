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

Node *DeleteNthNodeFromBack(Node *head, int n)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    if (cnt == n)
    {
        Node *newhead = head->next;
        free(head);
        return newhead;
    }

    int res = cnt - n;

    temp = head;
    while (temp != NULL)
    {
        res--;

        if (res == 0)
        {
            break;
        }
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    Node *ans = DeleteNthNodeFromBack(head, 5);
    print(ans);

    return 0;
}