class Solution {

private:
    int helper(int idx, bool buy, int n, vector<int>& prices, int fee, vector<vector<int>>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx][buy] != -1)
            return dp[idx][buy];
        
        int take = INT_MIN, take2 = INT_MIN;
        
        if(!buy)
            take = max(-prices[idx] + helper(idx+1, !buy, n, prices, fee, dp), helper(idx+1, buy, n, prices, fee, dp));
        else
            take2 = max(prices[idx] - fee + helper(idx+1, !buy, n, prices, fee, dp), helper(idx+1, buy, n, prices, fee, dp));
        
        return dp[idx][buy] = max({take, take2});
    }
    
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int n = prices.size();
        
        vector<vector<int>> dp(n, vector<int>(2, -1));
        
        return helper(0, 0, n, prices, fee, dp);
        
    }
};