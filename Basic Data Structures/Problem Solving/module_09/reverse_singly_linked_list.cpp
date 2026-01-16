#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

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
    tail = newnode;
}

void print_linked_list(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print_linked_list(temp->next);
}

void reversed_singly(Node *&head, Node *&tail, Node *temp)
{
    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reversed_singly(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while ((cin >> val && val != -1))
    {
        insert_at_tail(head, tail, val);
    }
    reversed_singly(head, tail, head);
    print_linked_list(head);

    return 0;
}
