class Solution {
public:
int height(TreeNode* root)
{
if(!root)
return 0;
return 1 + max(height(root->left),height(root->right));
}
bool isBalanced(TreeNode* root) {
if(!root)
return true;
int left = height(root->left);
int right = height(root->right);
return abs(left - right) <= 1 and isBalanced(root->left) && isBalanced(root->right);
}
};