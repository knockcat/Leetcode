class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        vector<vector<int>> dp(n+1, vector<int>(amount+1,0));
        
        for(int i = 0; i <= amount; ++i)
        {
            dp[n-1][i] = (i % coins[n-1] == 0 ? i/coins[n-1] : 1e9);
        }
        
        for(int i = n-2; i >= 0; --i)
        {
            for(int j = 0; j <= amount; ++j)
            {
                int notTake = dp[i+1][j];
                
                int take = INT_MAX;
                
                if(coins[i] <= j)
                    take = 1 + dp[i][j-coins[i]];
                
                dp[i][j] = min(take, notTake);
            }
        }
        
        return (dp[0][amount] >= 1e9 ? -1 : dp[0][amount]);
    }
};