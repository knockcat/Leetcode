108.✅Convert Sorted Array to Binary Search Tree

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        TreeNode *root = new TreeNode;
        root = BinarySearchTree(nums,0,nums.size()-1);
        return root;
    }
    TreeNode *BinarySearchTree(vector<int> arr, int start, int end)
    {
        if(start > end)
            return NULL;
        int mid = (start + end) / 2;
        TreeNode *root = new TreeNode(arr[mid]);
        
        root -> left = BinarySearchTree(arr,start, mid - 1);
        
        root -> right = BinarySearchTree(arr,mid + 1, end);
        
        return root;
    }
};