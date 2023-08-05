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

private:
    vector<TreeNode*> helper(int start, int end)
    {
        vector<TreeNode*> ans;
        
        if(start > end)
        {
            ans.push_back(nullptr);
            return ans;
        }
        
        if(start == end)
        {
            ans.push_back(new TreeNode(start));
            return ans;
        }
        
        for(int i = start; i <= end; ++i)
        {
            vector<TreeNode*> leftPossibleSubtrees = helper(start,  i-1);
            vector<TreeNode*> rightPossibleSubtrees = helper(i+1, end);
            
            
            for(auto rLeft : leftPossibleSubtrees)
            {
                for(auto rRight : rightPossibleSubtrees)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = rLeft;
                    root->right = rRight;
                    ans.push_back(root);
                }
            }
        }
        
        return ans;
    }
    
public:
    vector<TreeNode*> generateTrees(int n) {
        
        return helper(1, n);
        
    }
};