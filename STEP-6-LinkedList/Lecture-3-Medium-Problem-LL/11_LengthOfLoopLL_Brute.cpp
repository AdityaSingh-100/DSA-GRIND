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
    mover->next = head;

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

int StartingNode(Node *head)
{

    // map<Node *, int> mpp;
    unordered_map<Node *, int> mpp;

    Node *temp = head;
    int timer = 1;
    while (temp != nullptr)
    {
        if (mpp.find(temp) != mpp.end())
        {
            int value = mpp[temp];
            return (timer - value);
        }

        mpp[temp] = timer;
        timer++;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    int ans = StartingNode(head);
    cout << ans;

    return 0;
}