// 300.✅ Longest Increasing Subsequence

class Solution
{
public:
    int LIS(vector<int> &nums, int size)
    {
        vector<int> t(size, 1);

        for (int i = 1; i < nums.size(); ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (nums[i] > nums[j] && t[i] < t[j] + 1)
                    t[i] = t[i] + 1;
            }
        }

        return *max_element(t.begin(), t.end());
    }

    int lengthOfLIS(vector<int> &nums)
    {

        return LIS(nums, nums.size());
    }
};