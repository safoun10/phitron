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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = a;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    Node *slow = head;
    Node *fast = head;
    bool flag = false;

    //-----------------------------------------------------------------
    while (true)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << "Cycle detected!";
    }
    else
    {
        cout << "not detected!";
    }

    //-----------------------------------------------------------------

    cout << endl;
    print_linked_list(head);

    return 0;
}
