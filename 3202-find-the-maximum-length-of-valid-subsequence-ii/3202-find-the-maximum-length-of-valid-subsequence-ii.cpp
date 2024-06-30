class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        
        int ans = 0;
        
        for(int i = 0; i < k; ++i)
        {
            vector<int> dp(k, 0);
            
            for(auto& x : nums)
            {
                int rem = x % k;
                
                dp[rem] = max(dp[rem], dp[(i - rem + k)%k] + 1);
                
                ans = max(ans, dp[rem]);
            }
        }
        
        return ans;
    }
};