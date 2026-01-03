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
    temp->next = newnode;

    if (newnode->next == NULL)
    {
        tail = newnode;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////

void print_linked_list(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    // shift these both lines up or down for regular or reverse print
    // cout up in regular, cout down is reverse

    cout << temp->val << " ";
    print_linked_list(temp->next);
}

////////////////////////////////////////////////////////////////////////////////////////////

/*
how to delete a targeted node

 node_1 _> target_node _> node_2

 node_1.next = node_1.next.next or node_2
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
    if (deletenode == tail)
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
    if (target == tail)
    {
        tail = prev;
    }

    delete target;
}

////////////////////////////////////////////////////////////////////////////////////////////

void sort_linked_list(Node *&head)
{
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

int Linked_List_length(Node *&head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

Node *find_node_with_val(Node *&head, int val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while ((cin >> val && val != -1))
    {
        insert_at_tail(head, tail, val);
    }
    print_linked_list(head);

    return 0;
}

// all linked list snippets