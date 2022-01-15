// 102. Binary Tree Level Order Traversal

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        
        if(root == NULL)
            return result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            
            vector<int> level;
            
            for(int i = 0; i<size; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                
                if(node -> left != NULL)
                    q.push(node -> left);
                if(node -> right != NULL)
                    q.push(node -> right);
                
                level.push_back(node -> val);
            }
            result.push_back(level);
        }
        
        return result;
    }
};