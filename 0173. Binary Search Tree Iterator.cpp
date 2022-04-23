// 173.✅ Binary Search Tree Iterator

class BSTIterator
{
public:
    stack<TreeNode *> s;
    BSTIterator(TreeNode *root)
    {
        pushAll(root);
    }

    int next()
    {
        TreeNode *temp = s.top();
        s.pop();
        pushAll(temp->right);
        return temp->val;
    }

    bool hasNext()
    {
        return !s.empty();
    }
    void pushAll(TreeNode *root)
    {
        while (root != NULL)
        {
            s.push(root);
            root = root->left;
        }
    }
};