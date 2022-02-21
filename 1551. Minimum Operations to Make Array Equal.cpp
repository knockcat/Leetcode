// 1551.✅ Minimum Operations to Make Array Equal

class Solution
{
public:
    int minOperations(int n)
    {
        vector<int> v;
        for (int i = 0; i < n; ++i)
        {
            v.push_back(2 * i + 1);
        }

        int ans = 0;
        int k = ((n - 1) * (n + 1) + 1) / n;

        for (int i = 0; i < n / 2; ++i)
        {
            ans += (k - v[i]);
        }

        return ans;
    }
};