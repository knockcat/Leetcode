class Solution {
public:
    
    int helper(int index, int buy, vector<int>& prices, vector<vector<int>>& dp)
    {
        if(index >= prices.size())
            return 0;
        if(dp[index][buy] != -1)
            return dp[index][buy];
        if(buy)
            return dp[index][buy] = max(-prices[index] + helper(index+1,0,prices ,dp), helper(index+1, 1,prices,dp));
        return dp[index][buy] = max(prices[index] + helper(index+2,1,prices, dp), helper(index+1,0,prices ,dp));
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        
        return helper(0,1,prices,dp);
    }
};