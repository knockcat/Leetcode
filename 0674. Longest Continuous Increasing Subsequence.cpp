// 674.✅ Longest Continuous Increasing Subsequence

class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int cnt = 1, res = 0;

        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return 1;

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i - 1] < nums[i])
                ++cnt;
            else
                cnt = 1;

            res = max(cnt, res);
        }

        return res;
    }
};