// 454.✅ 4Sum II

class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        map<int, int> mp;
        int cnt = 0;
        for (int k : nums3)
        {
            for (int l : nums4)
            {
                ++mp[k + l]; // nums3[k]+nums4[l] (sum)
            }
        }

        for (int i : nums1)
        {
            for (int j : nums2)
            {
                cnt += mp[-(i + j)]; // nums3[k]+nums4[l] (sum) - nums1[i]+nums4[j] (sum) freq of their diff that is 0
            }
        }
        return cnt;
    }
};