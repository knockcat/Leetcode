// 589.✅ N-ary Tree Preorder Traversal

class Solution
{
public:
    void pre(Node *root, vector<int> &v)
    {
        if (root != NULL)
        {
            v.push_back(root->val);
            for (auto child : root->children)
                pre(child, v);
        }
    }

    vector<int> preorder(Node *root)
    {
        vector<int> v;

        pre(root, v);

        return v;
    }
};