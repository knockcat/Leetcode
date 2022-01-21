// 700.✅ Search in a Binary Search Tree

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return NULL;
        
        if(root->val == val)
            return root;
        else if(root->val > val)
            return searchBST(root->left, val);
        
        return searchBST(root->right , val);
    }
};