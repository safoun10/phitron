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

//////////////////////////////////////////////////////////////////////////////////////////

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
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
    newnode->prev = tail;
    tail = newnode;
}

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

////////////////////////////////////////////////////////////////////////////////////////////

/*
how to delete a targeted node in a doubly linked list

 node_1 <-> target_node <-> node_2

 node_1.next = node_2
 node_2.prev = node_1
 delete target_node
*/

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

        if (head != NULL)
        {
            head->prev = NULL;
        }
        else
        {
            tail = NULL;
        }

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

    Node *deletenode = temp->next;
    if (deletenode == NULL)
    {
        return;
    }

    temp->next = deletenode->next;

    if (deletenode->next != NULL)
    {
        deletenode->next->prev = temp;
    }
    else
    {
        tail = temp;
    }

    delete deletenode;
}

void delete_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }

    if (head == tail)
    {
        delete head;
        head = tail = NULL;
        return;
    }

    Node *temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }

    delete tail;
    tail = temp;
    tail->next = NULL;
}

void delete_next(Node *&head, Node *&tail, Node *&prev)
{
    if (prev == NULL || prev->next == NULL)
    {
        return;
    }

    Node *target = prev->next;
    prev->next = target->next;

    if (target->next != NULL)
    {
        target->next->prev = prev;
    }
    else
    {
        tail = prev;
    }

    delete target;
}

////////////////////////////////////////////////////////////////////////////////////////////

void sort_linked_list(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val) // ascending is > , descending is <
            {
                swap(i->val, j->val);
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////////////

int Linked_List_length(Node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

Node *find_node_with_val(Node *head, int val)
{
    while (head != NULL)
    {
        if (head->val == val)
        {
            return head;
        }
        head = head->next;
    }
    return NULL;
}

////////////////////////////////////////////////////////////////////////////////////////////

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

////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Node *head = NULL, *tail = NULL;

    int val;
    while ((cin >> val && val != -1))
    {
        insert_at_tail(head, tail, val);
    }
    print_forward(head);
    cout << endl;

    insert_at_any_position(head, tail, 2, 25);
    print_forward(head);

    return 0;
}

// all doubly linked list snippets