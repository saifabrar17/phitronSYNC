#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> v;
TreeNode *inputTree()
{
    int val;
    cin >> val;

    TreeNode *root;
    if (val == -1)
        root = NULL;
    else
        root = new TreeNode(val);
    queue<TreeNode *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l == -1 && r == -1)
        {
            v.push_back(p->val);
        }

        TreeNode *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new TreeNode(l);

        if (r == -1)
            right = NULL;
        else
            right = new TreeNode(r);

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
    TreeNode *root = inputTree();
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int reversedVector : v)
    {
        cout << reversedVector << " ";
    }

    return 0;
}