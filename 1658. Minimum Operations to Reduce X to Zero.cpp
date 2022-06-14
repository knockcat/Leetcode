// 1658.✅ Minimum Operations to Reduce X to Zero

class Solution
{
public:
    int minOperations(vector<int> &nums, int x)
    {
        int tot = 0;
        for (auto itr : nums)
            tot += itr;
        int ans = 0;
        int n = nums.size();

        if (tot == x)
            return n;

        int i = 0, j = 0;
        int ind = tot - x;
        int sum = 0;

        while (j < n)
        {
            sum += nums[j];

            while (i < j && sum > ind)
                sum -= nums[i++];

            if (sum == ind)
                ans = max(ans, j - i + 1);
            ++j;
        }

        if (!ans)
            return -1;
        else
            return n - ans;
    }
};