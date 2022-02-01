// 2016.✅ Maximum Difference Between Increasing Elements

class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int m = -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] < nums[j])
                    m = max(m, nums[j] - nums[i]);
            }
        }
        return m;
    }
};
