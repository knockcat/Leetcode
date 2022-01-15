✅// 653. Two Sum IV - Input is a BST

class Solution {
public:
    vector<int> v;
    void inorder(TreeNode *root)
    {
        if(root)
        {
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        
        inorder(root);
        int i = 0;
        int j = v.size()-1;
        
        while(i<j)
        {
            if(v[i] + v[j] ==  k)
                return true;
            
            if(v[i] + v[j] > k)
                j--;
            
            else
                i++;
        }
return false;
    }
};