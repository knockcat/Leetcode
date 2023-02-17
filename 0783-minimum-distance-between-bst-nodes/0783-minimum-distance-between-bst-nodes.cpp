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
    
    void helper(TreeNode* root, int& diff, int& pre)
    {
       if(root)
       {
           helper(root->left,diff,pre);
           if(pre != -1)
           {
               diff = min(diff, abs(root->val - pre));
           }
           
           pre = root->val;
           
           helper(root->right,diff,pre);
       }
    }
    
    int minDiffInBST(TreeNode* root) {
       
        int diff = INT_MAX, pre = -1;
        helper(root,diff,pre);
        return diff;
        
    }
};

