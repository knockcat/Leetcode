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
    
    
    void sumToLeaf(TreeNode* root, int val, int&res)
    {
        if(!root)
            return;
        int curr = val * 10 + root->val;
        
        if(!root->left and !root->right)
            res += curr;
        
        sumToLeaf(root->left,curr, res);
        sumToLeaf(root->right,curr,res);
    }
    
    int sumNumbers(TreeNode* root) {
        
        if(!root)
            return 0;
        
        int res = 0;
        
        sumToLeaf(root,0,res);
        
        return res;
        
    }
};