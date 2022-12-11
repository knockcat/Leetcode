class Solution {
public:
    
    int helper(int index, vector<int>& prices,int ok, int n, vector<vector<int>>& dp)
    {
        if(index == n  or ok == 4)
            return 0;
        if(dp[index][ok] != -1)
            return dp[index][ok];
        if(ok % 2 == 0)
            return dp[index][ok] = max(-prices[index] + helper(index+1, prices,ok+1, n, dp) ,helper(index+1,prices,ok, n, dp));
        return dp[index][ok] = max(prices[index] + helper(index+1, prices,ok+1, n, dp), helper(index+1, prices,ok, n, dp));
            
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return helper(0,prices,0,n,dp);
        
    }
};