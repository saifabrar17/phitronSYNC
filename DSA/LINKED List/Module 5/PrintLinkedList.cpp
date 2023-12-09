#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // next diye next node bujhaitesi
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(306);
    Node *c = new Node(420);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = head;
    while (temp != NULL)
    {
        /* code */
        cout << temp->val << endl;
        temp = temp->next;
    }

    // while (head != NULL)
    // {
    //     /* code */
    //     cout<<head->val<<endl;
    //     head = head->next;
    // }

    // cout<<head->val<<endl;
    // cout<<head->next->val<<endl;
    // cout<<head->next->next->val<<endl;
    // cout<<head->next->next->next->val<<endl;

    return 0;
}