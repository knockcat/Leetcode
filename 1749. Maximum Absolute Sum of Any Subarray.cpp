// 1749.✅ Maximum Absolute Sum of Any Subarray

class Solution
{
public:
    int maxAbsoluteSum(vector<int> &nums)
    {
        int sum1 = 0, sum2 = 0;
        int mx = 0, mn = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            sum1 += nums[i];
            if (sum1 < 0)
                sum1 = 0;
            mx = max(mx, sum1);
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            sum2 += nums[i];
            if (sum2 > 0)
                sum2 = 0;
            mn = min(mn, sum2);
        }
        return max(mx, abs(mn));
    }
};