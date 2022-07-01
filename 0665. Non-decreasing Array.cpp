// 665.✅ Non-decreasing Array

class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int cnt = 0;
        int n = nums.size();
        int mx = nums[0];

        for (int i = 1; i < n; ++i)
        {
            if (nums[i] < mx)
                ++cnt;
            mx = max(mx, nums[i]);
        }

        if (cnt <= 1)
            return true;

        cnt = 0;
        int mn = nums[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            if (nums[i] > mn)
                ++cnt;
            mn = min(mn, nums[i]);
        }

        return cnt <= 1;
    }
};