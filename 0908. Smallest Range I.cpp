// 908.✅ Smallest Range I

class Solution
{
public:
    int smallestRangeI(vector<int> &nums, int k)
    {

        int mx = INT_MIN;
        int mn = INT_MAX;

        for (auto i : nums)
        {
            mx = max(mx, i);
            mn = min(mn, i);
        }

        return max(mx - mn - 2 * k, 0);
    }
};
