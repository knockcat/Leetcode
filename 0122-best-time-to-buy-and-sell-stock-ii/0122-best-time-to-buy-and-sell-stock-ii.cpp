class Solution {
    
private:
    int helper(int idx, int buy, int n, vector<int>& prices, vector<vector<int>>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx][buy] != -1)
            return dp[idx][buy];
        
        int take = 0, notTake = 0, notTake2 = 0, take2 = 0;
        
        if(buy)
        {
            take = -prices[idx] + helper(idx+1, 0, n,  prices, dp);
            notTake = helper(idx+1, buy, n, prices, dp);
        }
        else
        {
            take2 = prices[idx] + helper(idx+1, 1, n, prices, dp);
            notTake2 = helper(idx+1, buy, n, prices, dp);
        }
        
        return dp[idx][buy] = max({take, notTake, take2, notTake2});
        
    }
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        vector<vector<int>> dp(n, vector<int>(2, -1));
        
        return helper(0, 1, n, prices,dp);
        
    }
};