#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_into_linked_list(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newNode = new ListNode(val);
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
void isPalindrome(ListNode *head, ListNode *tail)
{
    ListNode* tmp1 = head;
    ListNode* tmp2 = tail;
    int flag = 0;
    while (tmp1 != tmp2 && tmp2->next != tmp1)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = 1;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_into_linked_list(head, tail, val);
    }
    isPalindrome(head, tail);
    // print_linked_list(head);
    // print_reverse(tail);
    return 0;
}