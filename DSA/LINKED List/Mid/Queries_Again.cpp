#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *previous;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->previous = NULL;
    }
};
void addToHead(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->previous = newNode;
    head = newNode;
}
void addToTail(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->previous = tail;
    tail = tail->next;
}
void addToPosition(ListNode *head, int pos, int val)
{
    ListNode *newNode = new ListNode(val);
    ListNode *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;     
    tmp->next = newNode;           
    newNode->next->previous = newNode; 
    newNode->previous = tmp;           
}
int size(ListNode *head)
{
    ListNode *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void printHeadToTail(ListNode *head)
{
    ListNode *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printTailToHead(ListNode *tail)
{
    ListNode *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->previous;
    }
    cout << endl;
}
int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int pos, val;
        cin >> pos >> val;

        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            addToHead(head, tail, val);
            printHeadToTail(head);
            printTailToHead(tail);
        }
        else if (pos == size(head))
        {
            addToTail(head, tail, val);
            printHeadToTail(head);
            printTailToHead(tail);
        }
        else if (pos < size(head))
        {
            addToPosition(head, pos, val);
            printHeadToTail(head);
            printTailToHead(tail);
        }
    }

    return 0;
}