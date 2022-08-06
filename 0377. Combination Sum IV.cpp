// 377.✅ Combination Sum IV

class Solution
{
public:
    vector<int> dp;

    Solution()
    {
        dp.resize(1001);
        fill(dp.begin(), dp.end(), -1);
    }

    int combinationSum4(vector<int> &nums, int target, int currSum = 0)
    {
        if (currSum > target)
            return 0;
        if (currSum == target)
            return 1;
        if (dp[currSum] != -1)
            return dp[currSum];
        int ways = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (currSum + nums[i] <= target)
                ways += combinationSum4(nums, target, currSum + nums[i]);
        }
        return dp[currSum] = ways;
    }
};