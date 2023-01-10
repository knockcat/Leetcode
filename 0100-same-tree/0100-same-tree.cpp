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
    
    bool helper(TreeNode* p, TreeNode* q)
    {
        if(!p and !q)
            return true;
        if(!p and q or p and !q or p->val != q->val)
            return false;
        return helper(p->left,q->left) and helper(p->right,q->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
       return helper(p,q);
    }
};