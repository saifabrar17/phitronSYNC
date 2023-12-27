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
        this->next = next;
        this->prev = prev;
    }
};
// void insert_head(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);

//     if (head == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         // cout << "Inserted Head" << endl;
//         return;
//     }
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
//     // cout << "Inserted" << endl;
// }
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
// void insert_at_position(Node *head, int pos, int val)
// {
//     Node *newNode = new Node(val);
//     Node *tmp = head;

//     for (int i = 1; i < pos - 1; i++)
//     {
//         tmp = tmp->next;
//     }
//     newNode->next = tmp->next;
//     tmp->next = newNode;
//     newNode->next->prev = newNode;
//     newNode->prev = tmp;
// }
void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// int size(Node *head)
// {
//     int cnt = 0;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         /* code */
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_normal(head);
    // print_reverse(tail);
    return 0;
}