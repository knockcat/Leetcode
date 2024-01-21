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
    
    map<int,map<int,multiset<int>>> mp;
    
    void helper(TreeNode* root, int id, int level)
    {
        if(root)
        {
            mp[id][level].insert(root->val);
            helper(root->left, id-1, level + 1);
            helper(root->right, id+1, level + 1);
        }
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        int id = 0;
        helper(root, id, 0);
        
        vector<vector<int>> ans;
        
        for(auto&[f, s] : mp)
        {
            vector<int> col;
            for(auto& ms : s)
                col.insert(col.end(),ms.second.begin(),ms.second.end());
            ans.push_back(col);
        }
        
        return ans;
        
    }
};