// 2150.✅ Find All Lonely Numbers in the Array

class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        map<int, int> m;
        vector<int> res;
        for (int i : nums)
            ++m[i];

        for (int i = 0; i < nums.size(); ++i)
        {
            if (m[nums[i]] == 1 && m.count(nums[i] - 1) == 0 && m.count(nums[i] + 1) == 0)
                res.push_back(nums[i]);
        }

        return res;
    }
};