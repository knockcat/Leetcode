// 376.✅ Wiggle Subsequence

class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {

        int n = nums.size();

        if (n == 1)
            return 1;

        int cnt = 0;
        int sign = 0;

        for (int i = 1; i < n; ++i)
        {
            int diff = nums[i] - nums[i - 1];
            if (sign != -1 && diff < 0)
            {
                sign = -1;
                ++cnt;
            }

            else if (sign != 1 && diff > 0)
            {
                sign = 1;
                ++cnt;
            }
        }
        return cnt + 1;
    }
};