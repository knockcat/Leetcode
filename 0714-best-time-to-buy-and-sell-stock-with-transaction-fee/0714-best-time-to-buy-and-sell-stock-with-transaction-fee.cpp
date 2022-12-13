class Solution {
public:
    
    int helper(int index, int buy, vector<int>& prices, int fee, vector<vector<int>>& dp)
    {
        if(index == prices.size())
            return 0;
        if(dp[index][buy] != -1)
            return dp[index][buy];
        if(buy)
            return dp[index][buy] = max(-prices[index] + helper(index+1, 0, prices,fee,dp), helper(index+1, 1, prices,fee,dp));
        return dp[index][buy] = max(prices[index] - fee + helper(index+1,1,prices,fee,dp), helper(index+1,0,prices,fee,dp));
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        
        for(int i = n-1; i>=0; --i)
        {
            for(int buy = 1; buy>=0; --buy)
            {
                if(buy == 1)
                    dp[i][buy] = max(-prices[i] + dp[i+1][0], dp[i+1][1]);
                else
                    dp[i][buy] = max(prices[i] - fee +  dp[i+1][1], dp[i+1][0]);
            }
        }
        return dp[0][1];
    }
};