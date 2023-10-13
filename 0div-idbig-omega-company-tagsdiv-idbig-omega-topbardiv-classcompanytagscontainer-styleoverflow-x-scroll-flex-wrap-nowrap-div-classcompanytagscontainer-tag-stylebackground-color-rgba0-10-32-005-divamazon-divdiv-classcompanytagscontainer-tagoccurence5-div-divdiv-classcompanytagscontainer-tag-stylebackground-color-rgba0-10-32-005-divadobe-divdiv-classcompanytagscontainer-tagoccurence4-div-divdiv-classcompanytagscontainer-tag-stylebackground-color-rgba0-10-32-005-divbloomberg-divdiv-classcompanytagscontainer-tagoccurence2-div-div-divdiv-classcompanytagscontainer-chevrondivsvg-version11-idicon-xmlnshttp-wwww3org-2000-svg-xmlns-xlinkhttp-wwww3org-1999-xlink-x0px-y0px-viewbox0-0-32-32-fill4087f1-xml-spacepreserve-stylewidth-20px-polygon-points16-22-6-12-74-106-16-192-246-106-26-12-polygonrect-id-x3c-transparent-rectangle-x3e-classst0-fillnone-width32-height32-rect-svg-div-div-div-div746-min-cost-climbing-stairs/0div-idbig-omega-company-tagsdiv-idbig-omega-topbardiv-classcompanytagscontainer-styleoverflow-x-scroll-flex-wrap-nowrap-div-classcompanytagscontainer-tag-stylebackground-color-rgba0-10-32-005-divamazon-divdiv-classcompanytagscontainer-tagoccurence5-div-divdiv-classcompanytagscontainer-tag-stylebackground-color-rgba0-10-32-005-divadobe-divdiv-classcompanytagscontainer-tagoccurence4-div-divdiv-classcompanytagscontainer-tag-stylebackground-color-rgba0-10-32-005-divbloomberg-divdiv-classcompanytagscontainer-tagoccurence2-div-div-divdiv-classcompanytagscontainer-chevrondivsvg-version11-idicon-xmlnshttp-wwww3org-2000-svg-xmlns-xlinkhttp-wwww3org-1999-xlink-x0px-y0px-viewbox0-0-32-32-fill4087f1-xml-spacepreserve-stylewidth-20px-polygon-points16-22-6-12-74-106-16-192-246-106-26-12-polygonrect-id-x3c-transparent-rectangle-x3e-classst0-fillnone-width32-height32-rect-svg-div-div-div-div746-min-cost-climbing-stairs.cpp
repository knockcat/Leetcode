class Solution {
public:
    
    int helper(int idx, int n, vector<int>& cost, vector<int>& dp)
    {
        if(idx >= n)
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];

        int oneStep = cost[idx] + helper(idx+1, n, cost, dp);
        int twoStep = cost[idx] + helper(idx+2, n, cost, dp);
        
        return dp[idx] = min(oneStep, twoStep);
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        vector<int> dp(n+1, -1);
        
        return min(helper(0, n, cost, dp), helper(1, n, cost, dp));
        
    }
};