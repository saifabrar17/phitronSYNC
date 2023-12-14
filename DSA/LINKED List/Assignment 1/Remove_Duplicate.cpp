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

void remove_duplicates(Node* head) {
    Node* tmp = head;

    while (tmp != NULL) {
        Node* list = tmp;

        while (list->next != NULL) {
            if (list->next->val == tmp->val) {
                Node* duplicate = list->next;
                list->next = list->next->next;
                delete duplicate;
            } else {
                list = list->next;
            }
        }
        tmp = tmp->next;
    }
}

void insert_to_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main() {
   Node *head = NULL;
        Node *tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_to_linked_list(head, tail, val);
    }

    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}