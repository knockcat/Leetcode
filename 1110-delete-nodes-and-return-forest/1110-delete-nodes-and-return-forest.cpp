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
     bool set[1001] = {};
    void dfs(TreeNode* &root, bool flag, vector<TreeNode*>& res){
        if (root == nullptr) return;
        dfs(root->left, set[root->val], res);
        dfs(root->right, set[root->val], res);
        if (!set[root->val] && flag) res.push_back(root);
        if (set[root->val]) root = nullptr;
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> res;
        for (int num : to_delete)
            set[num] = true;
        dfs(root, true, res);
        return res;
    }
    
};