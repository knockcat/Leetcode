// 2348.✅ Number of Zero-Filled Subarrays

class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long ans = 0;
        long count = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                ++count;
                ans += count;
            }
            else
                count = 0;
        }
        return ans;
    }
};