// 1448.✅ Count Good Nodes in Binary Tree

class Solution {
    int ans = 0;
    void preorder(TreeNode *root,int max)
    {
        if(!root)
            return;
        
        if(root->val >= max)
        {
            ++ans;
            max = root->val;
        }
        
        preorder(root->left, max);
        preorder(root->right,max);
    }
    
public:
    
    int goodNodes(TreeNode* root) {
        preorder(root,INT_MIN);
        return ans;
    }
};