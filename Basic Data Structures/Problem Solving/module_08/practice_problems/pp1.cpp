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

bool check_same(Node *&head_1, Node *&head_2)
{
    Node *temp_1 = head_1;
    Node *temp_2 = head_2;

    while (temp_1 != NULL || temp_2 != NULL)
    {
        if (temp_1 == NULL || temp_2 == NULL)
        {
            return false;
        }

        if (temp_1->val != temp_2->val)
        {
            return false;
        }
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }
    return true;
}

void print_forward(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head_1 = NULL, *tail_1 = NULL;
    Node *head_2 = NULL, *tail_2 = NULL;

    int val_1, val_2;
    while ((cin >> val_1 && val_1 != -1))
    {
        insert_at_tail(head_1, tail_1, val_1);
    }

    while ((cin >> val_2 && val_2 != -1))
    {
        insert_at_tail(head_2, tail_2, val_2);
    }

    check_same(head_1, head_2) ? cout << "YES" : cout << "NO";

    return 0;
}