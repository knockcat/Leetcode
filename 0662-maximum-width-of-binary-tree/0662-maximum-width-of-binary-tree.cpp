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
#define ll long long int

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
     
        if(!root)
            return 0;
        
        ll res = 1;
        
        queue<pair<TreeNode*, ll>> q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            ll start = q.front().second;
            ll end = q.back().second;
            
            res = max(res, end - start + 1);
            
            ll size = q.size();
            
            for(int i = 0; i < size; ++i)
            {
                ll idx = q.front().second - start;
                TreeNode* curr = q.front().first;
                
                q.pop();
                
                if(curr->left)
                    q.push({curr->left,(ll)(2*idx)});
                if(curr->right)
                    q.push({curr->right,(ll)(2*idx)+ 1});
            }
        }
        
        return (int)res;
    }
};