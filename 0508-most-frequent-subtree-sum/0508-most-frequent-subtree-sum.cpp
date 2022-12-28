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
    
    unordered_map<int,int> mp;
    int maxCount = 0;
    
    int helper(TreeNode * root)
    {
        if(!root)
            return 0;
        int leftSum = helper(root->left);
        int rightSum = helper(root->right);
        
        int currSum = root->val + leftSum + rightSum;
        
        ++mp[currSum];
        maxCount = max(maxCount,mp[currSum]);
        
        return currSum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {

        helper(root);
        
        vector<int> ans;
        
        for(auto itr : mp)
        {
            if(itr.second == maxCount)
                ans.push_back(itr.first);
        }
        
        return ans;
            
    }
};