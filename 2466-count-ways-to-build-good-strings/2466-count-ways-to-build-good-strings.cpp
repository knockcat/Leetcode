class Solution {
public:
    
    int mod = 1e9 + 7;
    
    int helper(int i, int low, int high, int zero, int one, vector<int>& dp)
    {
       if( i > high)
           return 0;
    
       if(dp[i] != -1) 
           return dp[i];
        
       int ans = 0;
        
        if( i >= low and i <= high)
            ++ans;
        
        return dp[i] = (ans + helper(i + zero,low, high, zero , one, dp) + helper(i + one, low, high, zero, one, dp)) % mod;
    }
    
    int countGoodStrings(int low, int high, int zero, int one) {
        
        vector<int> dp(high+1, -1);
        
        return helper(0, low, high, zero, one, dp) % mod;
        
    }
};



