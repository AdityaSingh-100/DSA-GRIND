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

Node *OddEven(Node *head)
{
    vector<int> arr = {};
    Node *temp = head;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    while (temp != NULL && temp->next != NULL)
    {
        
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)
    {
        arr.push_back(temp->data);
    }

    temp = head->next;
    while (temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)
    {
        arr.push_back(temp->data);
    }

    int i = 0;
temp = head;
while (temp != NULL)
{
    temp->data = arr[i];  // Copy data from arr[i] to current node
    i++;
    temp = temp->next;          // Move to next node in original list
}
return head;
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 5, 6};
    Node *head = convertArrToLL(arr);
    Node *ans = OddEven(head);
    print(ans);

    return 0;
}