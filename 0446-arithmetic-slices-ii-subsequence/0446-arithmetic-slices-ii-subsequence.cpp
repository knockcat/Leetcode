class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        
        vector<unordered_map<long long, int>> dp(n);
        
        for(int i = 1; i < n; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                long long cd = (long long) nums[i] - nums[j];
                int count = dp[j].count(cd) ? dp[j][cd] : 0;
                dp[i][cd] += count + 1;
                ans += count;
            }
        }
        return ans;
    }
};