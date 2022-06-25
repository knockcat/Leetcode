// 968.✅ Binary Tree Cameras

class Solution
{
public:
    int cam = 0;
    int minCameraCover(TreeNode *root)
    {
        if (Camera(root) == "Want")
            ++cam;
        return cam;
    }

    string Camera(TreeNode *root)
    {
        if (root == NULL)
            return "Ok";
        string left = Camera(root->left);
        string right = Camera(root->right);

        if (left == "Want" || right == "Want")
        {
            ++cam;
            return "Provide";
        }
        else if (left == "Provide" || right == "Provide")
            return "Ok";
        return "Want";
    }
};