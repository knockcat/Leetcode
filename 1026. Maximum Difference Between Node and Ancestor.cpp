1026. Maximum Difference Between Node and Ancestor

class Solution {
public:
    
    int help(TreeNode *root, int currmin,int currmax)
    {
        if(root == NULL)
            return currmax - currmin;
        
        currmax = max(root->val,currmax);
        currmin = min(root->val,currmin);
        
        int left = help(root->left,currmin,currmax);
        int right = help(root->right,currmin,currmax);
        
        return max(left,right);
    }
    
    
    int maxAncestorDiff(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        return help(root,root->val,root->val);
    }
};