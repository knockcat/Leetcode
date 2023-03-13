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
    
    bool helper(TreeNode* root1, TreeNode* root2)
    {
        if(root1 and root2)
        {
            bool one = helper(root1->left, root2->right);
            bool two = helper(root1->right,root2->left);
            
            if(root1->val == root2->val and one and two)
                return true;
            else
                return false;
        }
        else if(!root1 and !root2)
            return true;
        else
            return false;
    }
    
    
    bool isSymmetric(TreeNode* root) {
        
        if(root == nullptr)
            return true;
        return helper(root->left, root->right);
    }
};