// 198.✅ House Robber

class Solution
{
    int t[105];

public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 0)
            return 0;

        t[0] = nums[0];
        if (n == 1)
            return t[0];

        t[1] = max(t[0], nums[1]);

        for (int i = 2; i < n; ++i)
            t[i] = max(t[i - 1], t[i - 2] + nums[i]);

        return t[n - 1];
    }
};