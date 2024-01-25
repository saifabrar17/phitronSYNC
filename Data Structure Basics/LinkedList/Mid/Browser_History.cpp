#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    string val;
    ListNode *next;
    ListNode *prev;
    ListNode(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAddressIntoList(ListNode *&head, ListNode *&tail, string val)
{
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
ListNode *findAddress(ListNode *head, string val)
{
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
            return tmp;
        tmp = tmp->next;
    }
    return tmp;
}
int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;
    string s;
    while (cin >> s)
    {
        if (s == "end")
            break;
        insertAddressIntoList(head, tail, s);
    }
    int query;
    cin >> query;
    ListNode *tmp;
    while (query--)
    {
        string address;
        cin >> address;
        if (address == "visit")
        {
            string f;
            cin >> f;
            ListNode *tmp2 = findAddress(head, f);
            if (tmp2 != NULL)
            {
                tmp = tmp2;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (address == "prev")
        {
            if (tmp != NULL && tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else
        {
            if (tmp != NULL && tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}