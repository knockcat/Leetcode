//✅1457. Pseudo-Palindromic Paths in a Binary Tree

class Solution {
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        int count = 0;
        vector<int> v(10,0);             //for storing values 1 to 9 and initialised to 0
        
        pseudo_count(root,v,count);
        
        return count;
    }
    
    void pseudo_count(TreeNode *root, vector<int>& v, int& count)
    {
        if(root == NULL)
            return;
        v[root->val]++;
        pseudo_count(root->left, v, count);
        pseudo_count(root->right, v, count);
        
        if(root->left == NULL && root->right == NULL)
        {
            int flag = 0;
            for(int i = 1; i < v.size();i++)
            {
                if(v[i] % 2 != 0)
                    flag++;
            }
            if(flag == 0 || flag == 1)
                count++;
        }
        v[root->val]--;
    }
};