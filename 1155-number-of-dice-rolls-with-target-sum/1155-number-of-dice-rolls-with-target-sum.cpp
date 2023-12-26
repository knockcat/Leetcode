class Solution {
public:
    
    const int mod = 1e9+7;
    
    int helper(int idx, int n, int k, int target, vector<vector<int>>& dp)
    {
        if(idx == n)
            return (target == 0);
        
        if(dp[idx][target] != -1)
            return dp[idx][target];
        
        int ways = 0;
        
        for(int i = 1; i <= k; ++i)
        {
            if(i <= target)
                ways = (ways + helper(idx+1, n, k, target - i, dp))%mod;
            
        }
        
        return dp[idx][target] = ways;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
     
        return helper(0, n, k, target, dp);
    }
};