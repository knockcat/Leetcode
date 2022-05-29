// 581.✅ Shortest Unsorted Continuous Subarray

class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        int mx = INT_MIN;
        int mn = INT_MAX;
        int n = nums.size();

        if (n == 1)
            return 0;

        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                if (nums[i] > nums[i + 1])
                {
                    mx = max(mx, nums[i]);
                    mn = min(mn, nums[i]);
                }
            }

            else if (i == n - 1)
            {
                if (nums[i] < nums[i - 1])
                {
                    mx = max(mx, nums[i]);
                    mn = min(mn, nums[i]);
                }
            }
            else
            {
                if (nums[i] > nums[i + 1] || nums[i] < nums[i - 1])
                {
                    mx = max(mx, nums[i]);
                    mn = min(mn, nums[i]);
                }
            }
        }

        if (mx == INT_MIN || mn == INT_MAX)
            return 0;

        int i, j;
        for (i = 0; i < n && nums[i] <= mn; ++i)
            ;
        for (j = n - 1; j >= 0 && nums[j] >= mx; --j)
            ;

        return j - i + 1;
    }
};