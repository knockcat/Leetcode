// 938.✅ Range Sum of BST

class Solution {
public:
    int sum = 0;
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL)
            return 0;
        if(root->val >= low && root->val <= high)
            sum += root->val;
        rangeSumBST(root->left,low,high);
        rangeSumBST(root->right,low,high);
        
        return sum;
    }
};