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
void insert_to_linked_list(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void search_in_linked_list(Node *head, int search)
{
     Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
   
}
int main()
{

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int v;
            cin >> v;
            if (v == -1)
            {
                break;
            }
            insert_to_linked_list(head, tail, v);
            int search;
            cin>>search;
            search_in_linked_list(head, search);
        }
        // print_linekd_list(head);
    }

    return 0;
}