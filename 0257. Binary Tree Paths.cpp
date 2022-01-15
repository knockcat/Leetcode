// 257. Binary Tree Paths

class Solution {
public:
    
    vector <string> ans;
    void getval(TreeNode *root, string s){
        if(root->left == NULL && root->right == NULL)
            ans.push_back(s);
        if(root->left)
            getval(root->left,s+"->"+to_string(root->left->val));
        
        if(root->right)
            getval(root->right,s+"->"+to_string(root->right->val));
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        s += to_string(root->val);
        getval(root,s);
        return ans;
    }
};