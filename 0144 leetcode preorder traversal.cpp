// 144 leetcode preorder traversal

class Solution {
public:
    void help(TreeNode *root, vector <int>& ans)
    {
        if(root == NULL)
            return ;
        ans.push_back(root->val);
        help(root->left,ans);
        help(root->right,ans);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        help(root, ans);
        return ans;
        
    }
};