// 199.✅ Binary Tree Right Side View

class Solution
{
public:
    vector<int> ans;

    void Right(TreeNode *root)
    {
        if (root == NULL)
            return;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; ++i)
            {
                TreeNode *curr = q.front();
                q.pop();

                if (i == n - 1)
                    ans.push_back(curr->val);

                if (curr->left != NULL)
                    q.push(curr->left);
                if (curr->right != NULL)
                    q.push(curr->right);
            }
        }
    }
    vector<int> rightSideView(TreeNode *root)
    {

        Right(root);

        return ans;
    }
};