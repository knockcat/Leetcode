// 945.✅ Minimum Increment to Make Array Unique

class Solution
{
public:
    int minIncrementForUnique(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int cnt = 0;

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] <= nums[i - 1])
            {
                cnt += (nums[i - 1] - nums[i]) + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return cnt;
    }
};