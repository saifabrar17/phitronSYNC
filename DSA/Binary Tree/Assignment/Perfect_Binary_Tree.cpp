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

int cntHeight = 0;

int maxHeight(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    cntHeight++;
    return max(maxHeight(root->left), maxHeight(root->right)) + 1;
}

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

    int height = maxHeight(root);
    if (cntHeight == pow(2, height) - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}