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

Node *IntersectionPoint(Node *head1, Node *head2)
{

    if (head1 == NULL || head2 == NULL)
    {
        return NULL;
    }

    Node *t1 = head1;
    Node *t2 = head2;
    while (t1 != t2)
    {
        t1 = t1->next;
        t2 = t2->next;

        if (t1 == t2)
            return t1;
  
        if (t1 == NULL)
            t1 = head2;
        if (t2 == NULL)
            t2 = head1;
    }
    return t1;
}

int main()
{
    // List 1: 3 -> 1 -> 4 -> 6 -> 2
    vector<int> arr1 = {3, 1, 4, 6, 2};
    Node *head1 = convertArrToLL(arr1);

    // List 2: 1 -> 2 -> 4 -> 5
    vector<int> arr2 = {1, 2, 4, 5};
    Node *head2 = convertArrToLL(arr2);

    // Find the node with value 4 in list1 (intersection point)
    Node *intersectionNode = head1->next->next; // 3->1->4

    // Connect last node of list2 (5) to the intersection node (4 from list1)
    Node *temp = head2;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = intersectionNode; // 5 now points to 4 -> 6 -> 2

    cout << "List 1: ";
    print(head1);
    cout << endl;

    cout << "List 2: ";
    print(head2);
    cout << endl;

    Node *intersection = IntersectionPoint(head1, head2);
    if (intersection != NULL)
    {
        cout << "Intersection at node with value: " << intersection->data << endl;
    }
    else
    {
        cout << "No intersection found" << endl;
    }
    return 0;
}