// 590.✅ N-ary Tree Postorder Traversal

class Solution
{
public:
    void Post(Node *root, vector<int> &v)
    {
        if (root != NULL)
        {
            for (auto child : root->children)
                Post(child, v);
            v.push_back(root->val);
        }
    }

    vector<int> postorder(Node *root)
    {
        vector<int> v;

        Post(root, v);

        return v;
    }
};
