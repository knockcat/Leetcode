501. Find Mode in Binary Search Tree

class Solution {
public:
    
    void solve(TreeNode *root , map<int,int> &mp)
    {
        if(root == NULL)
            return;
        
        map<int,int> :: iterator it;
        if(mp.count(root->val) == 0)
        {
            mp.insert({root->val,1});
        }
        
        else
        {
            it  = mp.find(root->val);
            it -> second += 1;
        }
        
        solve(root->left,mp);
        solve(root->right,mp);
        return;
    }
   
    
    vector<int> findMode(TreeNode* root) {
        vector <int> v;
        map <int,int> m;
        
        solve(root,m);
        
        map<int,int> :: iterator it;
        
        //finding maximum occurence
        int max = -1;
        for(it = m.begin(); it != m.end(); it++)
        {
            if(it->second > max)
                max = it -> second;
        }
        
        for(it = m.begin(); it != m.end(); it++)
        {
            if(it ->second == max)
                v.push_back(it->first);
        }
        
        return v;
        
        
    }
};