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
    vector<string> ans;
    
    void helper(TreeNode* root,string str)
    {
        if(!root)
            return;
        
        str += to_string(root->val);
        
        if(!root->left and !root->right)
        {
            ans.push_back(str);
            if(!str.empty())
                str.pop_back();
        }
        
        helper(root->left,str);
        helper(root->right,str);
        
    }
    
    
    int sumNumbers(TreeNode* root) {
        
        if(!root)
            return 0;
        
        helper(root,"");
        
        ll sum = 0;
        for(auto &itr : ans)
            sum += stoll(itr);
        
        return sum;
    }
};