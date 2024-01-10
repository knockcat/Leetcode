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
    
    map<int, vector<int>> graph;
    
    int amountOfTime(TreeNode* root, int start) {
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0; i < size; ++i)
            {
                TreeNode* parent = q.front();
                q.pop();
                
                if(parent->left)
                {
                    q.push(parent->left);
                    graph[parent->val].push_back(parent->left->val);
                    graph[parent->left->val].push_back(parent->val);
                }
                
                if(parent->right)
                {
                    q.push(parent->right);
                    graph[parent->val].push_back(parent->right->val);
                    graph[parent->right->val].push_back(parent->val);
                }
            }
        }
        
        int n = graph.size();
        
        queue<int> q2;
        
        set<int> visited;
        
        visited.insert(start);
        
        for(auto& itr : graph[start])
        {
            q2.push(itr);
            visited.insert(itr);
        }
        
        int cnt = 0;
        
        while(!q2.empty())
        {
            int size = q2.size();
            for(int i = 0; i < size; ++i)
            {
                int curr = q2.front();
                q2.pop();

                for(auto& itr : graph[curr])
                {
                    if(!visited.count(itr))
                    {
                        q2.push(itr);
                        visited.insert(itr);
                    }
                }
            }
            ++cnt;
        }
        
        return cnt;
    }
};