class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        
        vector<int> prev(amount+1, 0),  curr(amount+1,  0);
        
        for(int i = 0; i <= amount; ++i)
        {
            prev[i] = (i % coins[n-1] == 0 ? 1 : 0);
        }

        for(int i = n-2; i >= 0; --i)
        {
            for(int j = 0; j <= amount; ++j)
            {
                int notTake = prev[j];
                
                int take =  0;
                
                if(coins[i] <= j)
                {
                    take = curr[j-coins[i]];
                }
                
                curr[j] = take + notTake;
            }
            prev = curr;
        }
        
        return prev[amount];
        
    }
};