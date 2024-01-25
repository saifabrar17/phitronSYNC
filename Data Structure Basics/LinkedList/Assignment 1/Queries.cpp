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
void print_linked_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node*& head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_node(Node*& head, int pos) {
    if (head == NULL) {
        return;
    }
    if (pos == 0) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    Node* tmp = head;
    for (int i = 0; tmp != NULL && i < pos - 1; i++) {
        tmp = tmp->next;
    }
    if (tmp == NULL || tmp->next == NULL) {
        return;
    }
    Node* nextNode = tmp->next->next;
    delete tmp->next;
    tmp->next = nextNode;
}
int main()
{

    int testCase;
    cin >> testCase;

    Node* head = NULL;

    while(testCase--){
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, V);
        } else if (X == 1) {
            insert_at_tail(head, V);
        } else if (X == 2) {
            delete_node(head, V);
        }

        print_linked_list(head);
       
    }

    return 0;
}