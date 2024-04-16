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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth == 1)
        {
            TreeNode* node = new TreeNode(val);
            
            node->left = root;
            
            return node;
        }
        
        queue<TreeNode*> q;
        
        --depth;
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            
            for(int i = 0; i < sz; ++i)
            {
                TreeNode* curr = q.front();
                q.pop();
                
                if(depth == 1)
                {
                    TreeNode* nexLeft = curr->left ? curr->left : nullptr;
                    TreeNode* newNode1 = new TreeNode(val);
                    curr->left = newNode1;
                    newNode1->left = nexLeft;

                    TreeNode* nexRight = curr->right ? curr->right : nullptr;
                    TreeNode* newNode2 = new TreeNode(val);
                    curr->right = newNode2;
                    newNode2->right = nexRight;
                }
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            
            --depth;
        }
        
        return root;
    }
};