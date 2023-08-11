class Solution {
    
private:
    long long int helper(int idx, int n, vector<int>& coins, int amount, vector<vector<int>>& dp)
    {
        if(idx == n-1)
        {
            if(amount % coins[idx] == 0)
                return amount/coins[idx];
            else
                return 1e9;
        }
        
        if(dp[idx][amount] != -1)
            return dp[idx][amount];
        
        int notTake = helper(idx+1, n, coins, amount, dp);
        
        int take = INT_MAX;
        
        if(coins[idx] <= amount)
        {
            take = 1 + helper(idx, n, coins, amount - coins[idx], dp);
        }
        
        return dp[idx][amount] = min(take, notTake);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        
        int ans = helper(0, n, coins, amount, dp);
        
        return (ans >= 1e9 ? -1 : ans);
        
    }
};