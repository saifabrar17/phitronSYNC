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
void search_in_linked_list(Node* head, int x) {
    int index = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->val == x) {
            cout << index << endl;
            return;
        }
        tmp = tmp->next;
        index++;
    }
    cout << -1 << endl;
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
        }
        int x;
        cin >> x;
        search_in_linked_list(head, x);
  

    }

    return 0;
}