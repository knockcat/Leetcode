/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void helper(TreeNode* root, int& sum)
    {
        if(!root)
            return;
        
        if(root->left and !root->left->left and !root->left->right)
        {
            sum += root->left->val;
            helper(root->right, sum);
        }
        else
        {
            helper(root->left, sum);
            helper(root->right, sum);
        }
        
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum = 0;
        
        helper(root, sum);
        
        return sum;
        
    }
};