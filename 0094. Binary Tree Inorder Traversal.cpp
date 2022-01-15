// 94. Binary Tree Inorder Traversal

class Solution {
public:
    void help(TreeNode *root, vector<int>& ans)
    {
        if(root == NULL)
            return;
        help(root->left,ans);
        ans.push_back(root->val);
        help(root->right,ans);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        help(root,ans);
        
        return ans;
    }
};