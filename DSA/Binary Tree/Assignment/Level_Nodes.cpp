#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> v;
bool flag = false;
void traverse(Node *root, int x)
{
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *p = pr.first;
        int l = pr.second;
        if (l == x)
        {
            flag = true;
            v.push_back(p->val);
        }
        if (p->left)
            q.push({p->left, l + 1});
        if (p->right)
            q.push({p->right, l + 1});
    }
}
Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    Node *root = input();
    int x;
    cin >> x;
    traverse(root, x);
    if (!flag)
        cout << "Invalid";
    else
    {

        for (int r : v)
            cout << r << " ";
    }
    return 0;
}