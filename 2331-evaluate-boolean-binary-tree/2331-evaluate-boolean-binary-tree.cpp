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
    
    bool helper(TreeNode* root)
    {
        if(!root->left and !root->right)
        {
            return root->val;
        }
        
        bool left = helper(root->left);
        bool right = helper(root->right);
        
        return (root->val == 2 ? left | right : left & right);
    }
    
    bool evaluateTree(TreeNode* root) {
        
        return helper(root);
    }
};