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
    
private:
    
    long long total = 0 , ans = 0;
    
    int mod = 1e9 + 7;
    
    int helper(TreeNode* root)
    {
        if(!root)
            return 0;
        
        int left = helper(root->left);
        int right = helper(root->right);
        
        int subTree = left + right + root->val;
        
        ans = max(ans, ((total - subTree) * subTree));
        
        return subTree;
    }
    
    
public:
    int maxProduct(TreeNode* root) {
        
        total = helper(root);
        
        helper(root);
        
        return ans % mod;;
        
        
        
    }
};