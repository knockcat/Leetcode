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

    void helper(TreeNode* root, vector<int> freq, int& cnt)
    {
        if(root)
        {
            ++freq[root->val];
            
            helper(root->left, freq, cnt);
            helper(root->right, freq, cnt);
            
            int odd = 0;
            
            if(!root->left and !root->right)
            {
                for(int i = 0; i < 10; ++i)
                {
                    odd += (freq[i] & 1);
                }
                
                cnt += (odd == 1 or odd == 0);
            }
            
            --freq[root->val];
        }
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        
        int cnt = 0;
        
        vector<int> freq(10, 0);
        
        helper(root, freq, cnt);
        
        return cnt;
        
    }
};