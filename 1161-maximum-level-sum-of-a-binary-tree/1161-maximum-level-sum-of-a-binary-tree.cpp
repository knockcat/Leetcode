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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        
        int lvl = 0, ans = 0, maxLvlSum = -1e9;
        
        q.push(root);
        
        while(!q.empty())
        {
            lvl += 1;
            
            int size = q.size();
            
            int sum = 0;
            
            for(int i = 0; i < size; ++i)
            {
                TreeNode* curr = q.front();
                
                q.pop();
                
                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right)
                    q.push(curr->right);
                
                sum += curr->val;
            }
            
            if(sum > maxLvlSum)
            {
                ans = lvl;
                maxLvlSum = sum;
            }
        }
        
        return ans;
    }
};