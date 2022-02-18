// 229.✅ Majority Element II

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> v;

        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; ++i)
        {
            ++mp[nums[i]];
        }

        for (auto x : mp)
        {
            if (x.second > n / 3)
                v.push_back(x.first);
        }

        return v;
    }
};
