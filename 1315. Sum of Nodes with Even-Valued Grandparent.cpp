// 1315.✅ Sum of Nodes with Even-Valued Grandparent

class Solution
{
public:
    int sum = 0;

    void GrandSum(TreeNode *root)
    {
        if (root == NULL)
            return;
        if (root->val % 2 == 0)
        {
            if (root->left != NULL) // checking chid exist or not
            {
                if (root->left->left != NULL)
                    sum += root->left->left->val;
                if (root->left->right != NULL)
                    sum += root->left->right->val;
            }
            if (root->right != NULL)
            {
                if (root->right->right != NULL)
                    sum += root->right->right->val;
                if (root->right->left != NULL)
                    sum += root->right->left->val;
            }
        }
        GrandSum(root->left);
        GrandSum(root->right);
    }
    int sumEvenGrandparent(TreeNode *root)
    {
        GrandSum(root);
        return sum;
    }
};