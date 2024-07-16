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

private:
    void rootToNode(TreeNode* root,int &n,int &m,string &temp,string &s,string &d){
        if(!root) return;

        if(root->val == n) s=temp;
        if(root->val == m) d=temp;
        
        temp.push_back('L');
        rootToNode(root->left, n, m, temp, s, d);
        temp.pop_back();

        temp.push_back('R');
        rootToNode(root->right, n, m, temp, s, d);
        temp.pop_back();
    }


public:
    string getDirections(TreeNode* root, int n, int m) {

        string s,d,temp;
        rootToNode(root,n,m,temp,s,d);

        int ind = 0;

        for(int i=0;i<s.size() && i<d.size();i++){
            if(s[i]==d[i]) ind=i+1;
            else break;
        }

        string ans;

        for(int i = ind;i<s.size();i++){
            ans.push_back('U');
        }

        for(int i = ind;i<d.size();i++){
            ans.push_back(d[i]);
        }

        return ans;
    }
};