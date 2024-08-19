class Solution {
public:

    int helper(int n, int last, int tot, vector<vector<int>>& dp)
    {
        if(n < 0)
            return 1e9;
        
        if(n == 0)
            return 0;
        
        if(dp[n][last] != -1)
            return dp[n][last];
        
        int previousCopy = 1 + helper(n - last, last, tot, dp);
        
        int alreadyTaken = tot - n;
        
        int newCopy =  2 + helper(n - alreadyTaken, alreadyTaken, tot, dp);
        
        return dp[n][last] = min(newCopy, previousCopy);
        
    }
    
    int minSteps(int n) {
        
        if(n == 1)
            return 0;
        
        vector<vector<int>> dp(n+1,vector<int>(n+1, -1));
        
        return helper(n-1, 1, n, dp) + 1;
        
    }
};