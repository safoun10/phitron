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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

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

void delete_at_any_pos(Node *&head, Node *&tail, int index)
{
    if (head == NULL || index < 0)
    {
        return;
    }

    if (index == 0)
    {
        Node *deletenode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
        }
        delete deletenode;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    Node *deletenode = temp->next;
    if (deletenode == NULL)
    {
        return;
    }

    temp->next = deletenode->next;
    if (deletenode == tail)
    {
        tail = temp;
    }

    delete deletenode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int limit, task, val;
    cin >> limit;
    for (int t = 0; t < limit; t++)
    {
        cin >> task >> val;
        if (task == 0)
        {
            insert_at_head(head, tail, val);
            print_linked_list(head);
            cout << endl;
        }
        else if (task == 1)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
            cout << endl;
        }
        else
        {
            delete_at_any_pos(head, tail, val);
            print_linked_list(head);
            cout << endl;
        }
    }
    return 0;
}