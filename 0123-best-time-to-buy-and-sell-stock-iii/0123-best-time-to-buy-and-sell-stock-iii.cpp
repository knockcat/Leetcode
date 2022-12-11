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
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return helper(0,1,prices,2, n, dp);
        
    }
};