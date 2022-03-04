// 740.✅ Delete and Earn

class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        vector<int> freq(100001, 0);
        vector<int> t(100001, 0);

        for (auto i : nums)
            ++freq[i];

        t[1] = freq[1];

        for (int i = 2; i < 100001; ++i)
        {
            t[i] = max(t[i - 2] + i * freq[i], t[i - 1]);
        }

        return t[10000];
    }
};