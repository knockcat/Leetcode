// 416.✅ Partition Equal Subset Sum

class Solution
{

    bool subsetsum(vector<int> &nums, int sum, int n)
    {
        bool t[n + 1][sum + 1];
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
            for (int j = 1; j < sum + 1; ++j)
            {
                if (nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j] || t[i - 1][j - nums[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }

    bool Equal_sum_Partition(vector<int> &nums, int n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += nums[i];

        if (sum & 1) // sum is odd
            return false;

        return subsetsum(nums, sum / 2, n);
    }

public:
    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();
        if (Equal_sum_Partition(nums, n) == true)
            return true;
        else
            return false;
    }
};