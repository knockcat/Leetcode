//701. Insert into a Binary Search Tree

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root)
            root = new TreeNode (val);      //allocating memory for new node
        else if(root->val > val)
            root->left = insertIntoBST(root->left,val); // if root->val is > than value than we will insert in left
        else
            root->right = insertIntoBST(root->right,val);// if root->val is < than value than we will insert in right
        return root;
    }
   
};
