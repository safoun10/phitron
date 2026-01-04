#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

void print_forward(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_backward(Node *&tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Node *head = new Node(10);
    Node *tail = new Node(30);
    Node *a = new Node(20);

    head->next = a;
    a->next = tail;

    a->prev = head;
    tail->prev = a;

    insert_at_tail(head, tail, 0);
    print_forward(head);
    cout << endl;
    print_backward(tail);

    return 0;
}