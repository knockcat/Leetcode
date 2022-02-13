// 78.✅ Subsets

class Solution
{
    vector<vector<int>> ans;

    void subsets(vector<int> &nums, int i, vector<int> temp)
    {
        if (i == nums.size())
        {
            ans.push_back(temp);
            return;
        }

        subsets(nums, i + 1, temp);
        temp.push_back(nums[i]);
        subsets(nums, i + 1, temp);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> temp;
        subsets(nums, 0, temp);

        return ans;
    }
};
