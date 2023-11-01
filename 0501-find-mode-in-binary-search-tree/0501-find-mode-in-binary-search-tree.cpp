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
    
    void helper(TreeNode* root, unordered_map<int,int>& mp, int& maxi)
    {
        if(root)
        {
            helper(root->left, mp, maxi);
            ++mp[root->val];
            maxi = max(maxi, mp[root->val]);
            helper(root->right, mp, maxi);
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        
        unordered_map<int,int> mp;
        
        int maxi = 0;
        
        helper(root, mp, maxi);
        
        vector<int> ans;
        
        for(auto& itr : mp)
        {
            if(itr.second == maxi)
                ans.push_back(itr.first);
        }
        
        return ans;
    }
};