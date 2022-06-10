// 974.✅ Subarray Sums Divisible by K

class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        vector<int> cnt(k, 0);
        int sum = 0;

        for (int x : nums)
        {
            sum += (x % k + k) % k;
            ++cnt[sum % k];
        }

        int res = cnt[0];

        for (auto c : cnt)
            res += (c * (c - 1)) / 2; // nC2;

        return res;
    }
};