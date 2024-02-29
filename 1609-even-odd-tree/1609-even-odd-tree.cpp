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
    
    bool checkAscending(vector<int>& currLevel)
    {
        int n = currLevel.size();
        
        if(currLevel[0] % 2 == 0)
            return false;
        
        for(int i = 1; i < n; ++i)
        {
            if(currLevel[i] <= currLevel[i-1])
                return false;
            if(currLevel[i] % 2 == 0)
                return false;
        }
        return true;
    }
    
    bool checkDescending(vector<int>& currLevel)
    {
        int n = currLevel.size();
        
        if(currLevel[0] & 1)
            return false;
        for(int i = 1; i < n; ++i)
        {
            if(currLevel[i] >= currLevel[i-1])
                return false;
            if(currLevel[i] & 1)
                return false;
        }
        return true;
    }
    
    bool isEvenOddTree(TreeNode* root) {
        
        int level = 0;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        bool isEvOddTree = true;
        
        while(!q.empty())
        {
            int size = q.size();
            
            vector<int> currLevel;
            
            for(int i = 0; i < size; ++i)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                currLevel.push_back(curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                
                if(level & 1)
                {
                    if(!checkDescending(currLevel))
                    {
                        isEvOddTree = false;
                        break;
                    }
                }
                else
                {
                    if(!checkAscending(currLevel))
                    {
                        isEvOddTree = false;
                        break;
                    }
                }
            }
            ++level;
        }
        
        return isEvOddTree;
    }
};