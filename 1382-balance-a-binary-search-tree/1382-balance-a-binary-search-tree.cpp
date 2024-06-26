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
    
    void inorder(TreeNode* root, vector<int>& arr)
    {
        if(root)
        {
            inorder(root->left, arr);
            arr.push_back(root->val);
            inorder(root->right, arr);
        }
    }
    
    TreeNode* balance(vector<int>& arr, int low, int high)
    {
        if(low > high)
            return nullptr;
        
        int mid = (low + high) / 2;
        
        TreeNode* root = new TreeNode(arr[mid]);
        
        root->left = balance(arr, low, mid-1);
        
        root->right = balance(arr, mid+1, high);
        
        return root;
        
    }
    
    TreeNode* balanceBST(TreeNode* root) {
     
        vector<int> arr;
        
        inorder(root, arr);
        
        return balance(arr, 0, arr.size()-1);
        
    }
};