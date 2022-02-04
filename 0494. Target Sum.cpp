// 494.✅ Target Sum

class Solution
{
    int CountsubsetSum(vector<int> &nums, int sum)
    {
        int n = nums.size();

        int t[n + 1][sum + 1];

        for (int i = 0; i < n + 1; ++i)
        {
            for (int j = 0; j < sum + 1; ++j)
            {
                if (i == 0)
                    t[i][j] = 0;
                if (j == 0)
                    t[i][j] = 1;
            }
        }

        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 0; j < sum + 1; ++j)
            {
                if (nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j] + t[i - 1][j - nums[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }

public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i)
            sum += nums[i];

        if (abs(target) > sum || (sum + target) % 2 != 0)
        {
            return 0;
        }

        target = abs(target);

        sum = (sum + target) / 2;

        int cnt = CountsubsetSum(nums, sum);

        return cnt;
    }
};