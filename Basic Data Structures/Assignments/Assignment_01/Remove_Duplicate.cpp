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

void search_duplicate(Node *&head, Node *&tail)
{
    Node *prev = head;
    Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp->val == head->val)
        {
            prev->next = temp->next;
            if (temp == tail)
            {
                tail = prev;
            }
            delete temp;
            temp = prev->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
}

void remove_duplicate(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }
    search_duplicate(head, tail);
    cout << head->val << " ";
    remove_duplicate(head->next, tail);
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
    remove_duplicate(head, tail);
    return 0;
}