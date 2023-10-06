class Solution {
public:
    
    int helper(int n, vector<int>& dp)
    {
        if(n == 1)
            return 1;
        
        if(dp[n] != -1)
            return dp[n];
        
        int res = 1;
        
        for(int i = 1; i <= n-1; ++i)
        {
            int prod = i * max(n - i, helper(n-i, dp));
            res = max(res, prod);
        }
        
        return dp[n] = res;
    }
    
    int integerBreak(int n) {
        
        vector<int> dp(n+1, -1);
        
        return helper(n, dp);
    }
};