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
bool flag = false;

void findLevel(TreeNode *root, int x)
{
    queue<pair<TreeNode *, int>> q;

    if (root)
    {
        q.push({root, 0});
    }

    while (!q.empty())
    {
        pair<TreeNode *, int> parent = q.front();
        q.pop();

        TreeNode *node = parent.first;
        int level = parent.second;

        if (level == x)
        {
            v.push_back(node->val);
            flag = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    // end
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

    int lvl;
    cin >> lvl;

    findLevel(root, lvl);

    if (!flag)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int printVector : v)
        {
            cout << printVector << " ";
        }
    }

    return 0;
}