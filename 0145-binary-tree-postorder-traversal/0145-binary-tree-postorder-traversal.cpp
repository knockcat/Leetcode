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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        
        if(!root)
            return ans;
        
        stack<TreeNode*> st;
        
        TreeNode* prev = root;
        
        while(prev != nullptr or !st.empty())
        {
            if(prev)
            {
                st.push(prev);
                prev = prev->left;
            }
            else
            {
                TreeNode* temp = st.top()->right;
                
                if(temp == nullptr)
                {
                    temp = st.top();
                    
                    st.pop();
                    
                    ans.push_back(temp->val);
                    
                    while(!st.empty() and st.top()->right == temp)
                    {
                        temp = st.top();
                        
                        st.pop();
                        
                        ans.push_back(temp->val);
                    }
                }
                else
                    prev = temp;
            }
        }
        
        return ans;
    }
};