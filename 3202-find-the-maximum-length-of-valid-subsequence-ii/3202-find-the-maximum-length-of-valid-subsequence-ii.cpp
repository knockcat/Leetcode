class Solution {
public:
    
    int helper(vector<int>& nums, int need, int k)
    {
        int ans = 0;
        
        vector<int> dp(k+1, 0);
        
        for(int i = 0; i < nums.size(); ++i)
        {
            int rem = nums[i] % k;

            dp[rem] = max(dp[rem], dp[(need - rem + k)%k] + 1);
            
            ans = max(ans, dp[rem]);
        }
        
        return ans;
    }
    
    int maximumLength(vector<int>& nums, int k) {
        
        int ans = 0;
        
        for(int i = 0; i < k; ++i)
        {
            ans = max(ans, helper(nums, i, k));
        }
        
        return ans;
    }
};