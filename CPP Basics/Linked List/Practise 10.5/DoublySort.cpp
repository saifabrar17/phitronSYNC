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
void isPalindrome(Node *head, Node *tail)
{
    Node *tmpHead = head;
    Node *tmpTail = tail;
    int flag = 0;
    while (tmpHead != tmpTail && tmpTail->next != tmpHead)
    {
        if (tmpHead->val != tmpTail->val)
        {
            flag = 1;
        }
        tmpHead = tmpHead->next;
        tmpTail = tmpTail->prev;
    }
    flag ? cout << "NO" << endl : cout << "Yes" << endl;
}
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
    
    return 0;
}