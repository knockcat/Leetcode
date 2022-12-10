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
     int rec(TreeNode* root) {
        if (!root) return 0;
        int subtree = rec(root->left) + rec(root->right) + root->val;
        res = max(res, (total - subtree) * subtree);
        return subtree;
    }
    
    int maxProduct(TreeNode* root) {
        total = rec(root);
        rec(root);
        return res % int(pow(10,9)+7);
    }
    
private:
    long res = 0, total = 0;
};