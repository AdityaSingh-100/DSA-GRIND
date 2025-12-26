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

bool palindromeCheck(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != nullptr)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp != nullptr)
    {
        if (temp->data != st.top())
            return false;
        temp = temp->next;
        st.pop();
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 3, 2, 2};
    Node *head = convertArrToLL(arr);
    bool ans = palindromeCheck(head);
    cout << ans;

    return 0;
}