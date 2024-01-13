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
        TreeNode *f = q.front();
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

        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void inOrder(TreeNode *root, bool left, bool right)
{
    if (!root)
        return;
    inOrder(root->left, true, false);
    if (left || right)
        cout << root->val << " ";
    inOrder(root->right, false, true);
}
void leftSubTree(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
        leftSubTree(root->left);
    else
        leftSubTree(root->right);
    cout << root->val << " ";
}
void rightSubTree(TreeNode *root)
{
    if (!root)
        return;
    cout << root->val << " ";
    if (root->right)
        rightSubTree(root->right);
    else
        rightSubTree(root->left);
}
int main()
{
    TreeNode *root = inputTree();
    if (root->left)
        leftSubTree(root->left);
    if (root)
        cout << root->val << " ";
    if (root->right)
        rightSubTree(root->right);
    return 0;
}