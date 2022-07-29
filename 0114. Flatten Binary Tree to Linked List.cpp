// 114.✅ Flatten Binary Tree to Linked List

class Solution
{
public:
    void flatten(TreeNode *root)
    {

        if (root == nullptr)
            return;

        stack<TreeNode *> st;
        st.push(root);

        while (!st.empty())
        {
            TreeNode *curr = st.top();
            st.pop();
            if (curr->right)
                st.push(curr->right);
            if (curr->left)
                st.push(curr->left);
            if (!st.empty())
                curr->right = st.top();
            curr->left = nullptr;
        }
    }
};

// Another Approach

class Solution
{
public:
    TreeNode *prev = nullptr;
    void flatten(TreeNode *root)
    {
        if (root == nullptr)
            return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = nullptr;
        prev = root;
    }
};
