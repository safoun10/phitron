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

void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{
    if (index < 0)
    {
        return;
    }

    Node *newnode = new Node(val);
    if (index == 0)
    {
        newnode->next = head;
        if (head != NULL)
        {
            head->prev = newnode;
        }
        head = newnode;
        if (tail == NULL)
        {
            tail = newnode;
        }
        return;
    }
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp == NULL)
        {
            delete newnode;
            return;
        }
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newnode;
    }

    temp->next = newnode;

    if (newnode->next == NULL)
    {
        tail = newnode;
    }
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

    insert_at_any_position(head, tail, 1, 100);
    print_forward(head);
    cout << endl;
    print_backward(tail);

    return 0;
}