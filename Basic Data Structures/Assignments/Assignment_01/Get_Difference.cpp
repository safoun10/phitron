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

int link_max(Node *&head, int max)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return max;
    }
    else if (temp->val > max)
    {
        max = temp->val;
    }
    temp = temp->next;
    return link_max(temp, max);
}

int link_min(Node *&head, int min)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return min;
    }
    else if (temp->val < min)
    {
        min = temp->val;
    }
    temp = temp->next;
    return link_min(temp, min);
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while ((cin >> val && val != -1))
    {
        insert_at_tail(head, tail, val);
    }

    cout << link_max(head, INT_MIN) - link_min(head, INT_MAX);
    return 0;
}