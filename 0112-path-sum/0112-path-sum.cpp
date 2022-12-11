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
    
    bool helper(TreeNode* root, int currSum, int targetSum)
    {
        if(!root)
        {
            return false;
        }
        if(!root->left and !root->right)
            return currSum+root->val == targetSum;
        
        bool one = helper(root->left,currSum + root->val, targetSum);
        bool two = helper(root->right,currSum + root->val, targetSum);
        
        return one or two;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(!root)
            return false;
        return helper(root,0,targetSum);
    }
};