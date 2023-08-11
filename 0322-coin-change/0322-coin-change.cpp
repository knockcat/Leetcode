class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        vector<int> prev(amount+1,0), curr(amount+1, 0);
        
        for(int i = 0; i <= amount; ++i)
        {
            prev[i] = (i % coins[n-1] == 0 ? i/coins[n-1] : 1e9);
        }
        
        for(int i = n-2; i >= 0; --i)
        {
            for(int j = 0; j <= amount; ++j)
            {
                int notTake = prev[j];
                
                int take = INT_MAX;
                
                if(coins[i] <= j)
                    take = 1 + curr[j-coins[i]];
                
                curr[j] = min(take, notTake);
            }
            prev = curr;
        }
        
        return (prev[amount] >= 1e9 ? -1 : prev[amount]);
    }
};