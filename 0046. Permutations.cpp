// 46.✅ Permutations

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> v;

        sort(nums.begin(), nums.end());

        do
        {
            v.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return v;
    }
};

class Solution
{
public:
    void helper(vector<int> &nums, vector<vector<int>> &res, int ind)
    {
        if (ind == nums.size())
        {
            res.push_back(nums);
            return;
        }

        for (int i = ind; i < nums.size(); ++i)
        {
            swap(nums[i], nums[ind]);
            helper(nums, res, ind + 1);
            swap(nums[i], nums[ind]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;

        helper(nums, res, 0);

        return res;
    }
};