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
    
    void helper(TreeNode* root, vector<int> v, vector<vector<int>>& res, int targetSum)
    {
        if(!root)
            return;
        
        if(!root->left and !root->right)
        {
            if(targetSum - root->val == 0)
            {
                v.push_back(root->val);
                res.push_back(v);
                return ;
            }
            return ;
        }
        
        v.push_back(root->val);
        helper(root->left,v,res,targetSum - root->val);
        helper(root->right,v,res,targetSum - root->val);
        v.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> v;
        vector<vector<int>> res;
        
        helper(root,v,res,targetSum);
        
        return res;
        
    }
};