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
void compere_linked_list(Node *head1, Node *head2)
{
    int count1 = 0;
    int count2 = 0;
    Node *tmp1 = head1;
    while (tmp1 != NULL)
    {
        count1++;
        tmp1 = tmp1->next;
    }
    Node *tmp2 = head2;
    while (tmp2 != NULL)
    {
        count2++;
        tmp2 = tmp2->next;
    }
    // cout << count1 << " " << count2 << endl;
    int flag = 1;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            flag = 0;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (count1 != count2)
    {
        flag = 0;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_to_linked_list(head1, tail1, v);
    }
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_to_linked_list(head2, tail2, v);
    }
    compere_linked_list(head1, head2);

    return 0;
}