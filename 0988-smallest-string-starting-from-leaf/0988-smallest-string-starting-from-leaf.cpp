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
    
    string ans = "~";
    
    void helper(TreeNode* root, string curr)
    {
        if(!root)
           return;
        
        if(!root->left and !root->right)
            ans = min(ans, char(root->val + 'a') + curr);
        
        helper(root->left, char(root->val + 'a') + curr);
        helper(root->right, char(root->val + 'a') + curr);   
    }
    
    string smallestFromLeaf(TreeNode* root) {
    
        helper(root, "");
        return ans;
        
    }
};