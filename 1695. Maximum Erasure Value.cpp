// 1695.✅ Maximum Erasure Value

class Solution
{
public:
    int maximumUniqueSubarray(vector<int> &nums)
    {
        int i = 0, j = 0, n = nums.size();
        unordered_set<int> s;
        int sum, ans;
        ans = sum = 0;

        while (j < n)
        {
            if (s.find(nums[j]) != s.end())
            {
                sum -= nums[i];
                s.erase(nums[i++]);
            }
            else
            {
                sum += nums[j];
                ans = max(ans, sum);
                s.insert(nums[j++]);
            }
        }

        return ans;
    }
};