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

    TreeNode* helper(TreeNode* root, int target)
    {
        if(!root)
            return nullptr;
        
        TreeNode* left = helper(root->left, target);
        TreeNode* right = helper(root->right, target);
        
        if(!left)
            root->left = nullptr;
        
        if(!right)
            root->right = nullptr;
        
        if(!left and !right and root->val == target)
        {
            return nullptr;
        }
        return root;
    }
    
    
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        return helper(root, target);
        
    }
};