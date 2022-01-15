226. Invert Binary Tree

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        TreeNode *right = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(right);
        
        return root;
    }
};