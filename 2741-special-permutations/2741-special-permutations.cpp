class Solution {
    
private:
    
    int mod = 1e9 + 7;
    
    int helper(int idx, int prev, int mask, int n, vector<int>& nums, vector<vector<int>>& dp)
    {
        if(idx == n)
            return 1;
        
        if(dp[prev+1][mask] != -1)
            return dp[prev+1][mask];
        
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(mask & (1 << i))
                continue;
            
            if(prev == -1 or nums[i] % nums[prev] == 0 or nums[prev] % nums[i] == 0)
            {
                ans += helper(idx+1, i, mask | (1 << i), n, nums, dp);
                ans %= mod;
            }
        }
        
        return dp[prev+1][mask] = ans;
    }
    
public:
    int specialPerm(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<vector<int>> dp(n+1, vector<int>(1 << 14 + 1, -1));
        
        return helper(0, -1, 0, n, nums, dp);
        
    }
};