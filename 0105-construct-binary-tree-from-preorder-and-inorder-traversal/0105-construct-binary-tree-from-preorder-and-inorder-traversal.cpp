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
    
    TreeNode* build(int inStart, int preStart,int inEnd, int preEnd, vector<int>& inorder, vector<int>& preorder, unordered_map<int,int>& mp)
    {
        if(inStart > inEnd or preStart > preEnd)
            return nullptr;
        
        TreeNode* root = new TreeNode(preorder[preStart]);
        
        int idx = mp[root->val];
        int inLeft = idx - inStart;
        
        root->left = build(inStart, preStart+1, idx - 1, preStart + inLeft,inorder, preorder, mp);
        root->right = build(idx+1,preStart + inLeft + 1,inEnd, preEnd, inorder, preorder, mp);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        unordered_map<int,int> mp;
        int n = inorder.size(),m = preorder.size();
        
        for(int i = 0; i < n; ++i)
            mp.insert({inorder[i],i});
            
        TreeNode* root = build(0,0,n-1,m-1,inorder,preorder,mp);
        
        return root;
        
    }
};