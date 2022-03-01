// 654.✅ Maximum Binary Tree

class Solution
{
public:
    TreeNode *construct(vector<int> nums, int start, int end)
    {
        if (start >= end)
            return NULL;
        int target = 0, temp = INT_MIN;

        for (int i = start; i < end; ++i)
        {
            if (nums[i] > temp)
            {
                target = i;
                temp = nums[i];
            }
        }

        TreeNode *root = new TreeNode(temp);
        root->left = construct(nums, start, target);
        root->right = construct(nums, target + 1, end);

        return root;
    }

    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {

        TreeNode *root = construct(nums, 0, nums.size());

        return root;
    }
};