class Solution {
public:
    
    const int mod = 1e9+7;
    
    int helper(int n, int absent, int late, vector<vector<vector<int>>>& dp)
    {
        if(n == 0)
            return 1;
        
        if(dp[n][absent][late] != -1)
            return dp[n][absent][late];
        
        int total = 0;
        
        total += helper(n-1, absent, 2, dp);
        total %= mod;
        
        if(absent > 0)
        {
            total += helper(n-1, absent-1, 2, dp);
            total %= mod;
        }
        
        if(late > 0)
        {
            total += helper(n-1, absent, late-1, dp);
            total %= mod;
        }
        
        return dp[n][absent][late] = total;
    }
    
    int checkRecord(int n) {
        
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
        
        return helper(n, 1, 2, dp);
        
    }
};