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
    int helper(TreeNode* root, int& mini, int& val)
    {
        if(root->left)
            helper(root->left,mini, val);
        
        if(val >= 0)
            mini = min(mini, root->val - val);
        
        val = root->val;
        
        if(root->right)
            helper(root->right,   mini , val);
        
        return mini;
    }
    
public:
    int getMinimumDifference(TreeNode* root) {
        
        int mini = INT_MAX,val = -1;
        
        return helper(root, mini, val);
       
    }
};