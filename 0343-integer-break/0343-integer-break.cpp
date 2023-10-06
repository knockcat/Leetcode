class Solution {
public:
    
    int helper(int idx, int sum, int n, vector<vector<int>>& dp)
    {
        if(sum == 0)
           return 1;
        
        if(sum < 0 or idx >= n)
            return 0;
        
        if(dp[idx][sum] != -1)
            return dp[idx][sum];
        
        int res = helper(idx+1, sum, n, dp);
        
        dp[idx][sum] = res = max(res, idx * helper(idx, sum-idx, n, dp));
        
        return res;
    }
    
    int integerBreak(int n) {
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        return helper(1, n, n, dp);
        
    }
};