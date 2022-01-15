652. Find Duplicate Subtrees

class Solution {
public:
    vector <TreeNode*> v;
    unordered_map <string,vector<TreeNode*>> m;
    
    string help(TreeNode *root)
    {
        if(root == NULL)
            return "#";
        string ans = to_string(root->val) + "-" + help(root->left) + "-" + help(root->right);
        m[ans].push_back(root);
        return ans;
    }
    
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        if(root == NULL)
            return v;
        
        help(root);
        
        for(auto i = m.begin(); i != m.end(); i++)
        {
            if(i->second.size() > 1)
                v.push_back(i->second[0]);
        }
        return v;
    }
};