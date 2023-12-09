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
void insert_to_linked_list(Node *&head,Node *&tail, int v)
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
void compere_linked_List(Node *head)
{
    int min = head->val;
    int max = head->val;

    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        else if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    int ans = max - min;
    cout << ans << endl;
}
int main()
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
    }
    compere_linked_List(head);
    return 0;
}