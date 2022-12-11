class Solution {
public:
    
    int helper(int index, int buy, vector<int>& prices, int cap, int n, vector<vector<vector<int>>>& dp)
    {
        if(cap == 0 or index == n)
            return 0;
        if(dp[index][buy][cap] != -1)
            return dp[index][buy][cap];
        if(buy == 1)
            return dp[index][buy][cap] = max(-prices[index] + helper(index+1, 0, prices, cap, n ,dp), helper(index+1,1,prices,cap, n, dp));
        
        return dp[index][buy][cap] = max(prices[index] + helper(index + 1, 1, prices,cap - 1, n, dp), helper(index+1, 0, prices,cap, n, dp));
    }
    
    int maxProfit(vector<int>& prices) {
        
        int n =  prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        
        for(int i = n-1; i>=0; --i)
        {
            for(int buy = 0; buy <= 1; ++buy)
            {
                for(int cap = 1; cap <= 2; ++cap)
                {
                    if(buy == 1)
                    {
                        dp[i][buy][cap] = max(-prices[i] + dp[i+1][0][cap], dp[i+1][1][cap]);
                    }
                    else
                    {
                        dp[i][buy][cap] = max(prices[i] + dp[i+1][1][cap-1], dp[i+1][0][cap]);
                    }
                }
            }
        }
        
        
        return dp[0][1][2];
        
    }
};