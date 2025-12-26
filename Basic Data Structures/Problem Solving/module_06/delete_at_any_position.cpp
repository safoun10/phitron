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

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_at_any_pos(Node *&head, int index)
{
    if (head == NULL || index < 0)
    {
        return;
    }

    if (index == 0)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
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
    delete_at_any_pos(head, 1);
    print_linked_list(head);

    return 0;
}
