// 662.✅ Maximum Width of Binary Tree

class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int res = 1;
        queue<pair<TreeNode *, int>> q;

        // I am using intialising list
        q.push({root, 0}); // also can use make_pair

        while (!q.empty())
        {
            int cnt = q.size();
            // start is the index of root node for first level
            int start = q.front().second;
            int end = q.back().second;

            res = max(res, end - start + 1);

            for (int i = 0; i < cnt; ++i)
            {
                pair<TreeNode *, int> p = q.front();
                // we will use it while inserting it children
                // left child will be 2 * idx + 1;
                // right chils will be 2 * idx + 2;
                int idx = p.second - start;

                q.pop();

                // if  left child exist
                if (p.first->left != NULL)
                    q.push({p.first->left, (long long)2 * idx + 1});

                // if right child exist
                if (p.first->right != NULL)
                    q.push({p.first->right, (long long)2 * idx + 2});
            }
        }

        return res;
    }
};