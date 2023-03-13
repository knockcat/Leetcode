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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr)
            return true;
        queue<TreeNode*> q1, q2;
        q1.push(root->left);
        q2.push(root->right);
        
        while(!q1.empty() and !q2.empty())
        {
            TreeNode*curr1 = q1.front();
            TreeNode*curr2 = q2.front();
            q1.pop();
            q2.pop();
            
            if(!curr1 and !curr2)
                continue;
            if(!curr1 or !curr2)
                return false;
            if(curr1->val != curr2->val)
                return false;
           
            q1.push(curr1->left);
            q1.push(curr1->right);
            q2.push(curr2->right);
            q2.push(curr2->left);
        }
        return true;
    }
};