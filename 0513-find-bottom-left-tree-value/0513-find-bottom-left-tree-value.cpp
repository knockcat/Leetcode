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
    
    map<int,int> mp;
    
    void findLeftValue(TreeNode* root, int currLevel , int& maxLevel)
    {
        if(root)
        {
            findLeftValue(root->left, currLevel + 1, maxLevel);
            findLeftValue(root->right, currLevel + 1, maxLevel);
            
            maxLevel = max(maxLevel , currLevel);
            
            if(mp.find(maxLevel) == mp.end())
                mp[maxLevel] = root->val;
        }
    }
    
    int findBottomLeftValue(TreeNode* root) {
        
        int maxLevel = 0;
        
        findLeftValue(root, 0, maxLevel);
        
        return mp[maxLevel];
    }
};