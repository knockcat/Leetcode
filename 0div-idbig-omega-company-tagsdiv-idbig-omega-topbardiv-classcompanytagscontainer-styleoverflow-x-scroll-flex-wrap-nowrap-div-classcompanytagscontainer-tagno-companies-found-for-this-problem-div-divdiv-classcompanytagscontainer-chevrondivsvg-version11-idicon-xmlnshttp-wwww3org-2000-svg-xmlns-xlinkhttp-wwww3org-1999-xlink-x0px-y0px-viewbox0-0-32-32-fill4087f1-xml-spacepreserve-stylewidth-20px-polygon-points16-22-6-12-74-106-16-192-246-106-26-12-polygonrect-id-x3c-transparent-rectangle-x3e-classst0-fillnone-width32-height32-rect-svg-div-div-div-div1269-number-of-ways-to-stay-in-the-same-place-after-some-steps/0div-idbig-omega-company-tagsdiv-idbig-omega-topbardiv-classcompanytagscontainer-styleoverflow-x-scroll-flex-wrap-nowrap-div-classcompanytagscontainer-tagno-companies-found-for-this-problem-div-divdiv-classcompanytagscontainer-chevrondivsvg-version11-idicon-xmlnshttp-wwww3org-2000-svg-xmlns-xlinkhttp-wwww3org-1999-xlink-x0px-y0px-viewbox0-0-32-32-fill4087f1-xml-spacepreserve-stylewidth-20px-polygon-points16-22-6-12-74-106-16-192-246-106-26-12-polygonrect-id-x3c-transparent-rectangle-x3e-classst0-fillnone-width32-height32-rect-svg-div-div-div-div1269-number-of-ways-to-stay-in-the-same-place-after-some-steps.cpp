class Solution {
public:
        
    const int mod = 1e9+7;
    
    int helper(int idx, int steps, int arrLen, vector<vector<int>>& dp)
    {
        if(steps == 0 and idx == 0)
        {
            return 1;
        }
        
        if(idx < 0 or idx >= arrLen or (idx != 0 and steps == 0))
            return 0;
        
        if(dp[idx][steps] != -1)
            return dp[idx][steps];
    
        int stay = helper(idx, steps-1, arrLen, dp);
        
        int left =  helper(idx-1, steps-1,  arrLen, dp);
    
        int right = helper(idx+1, steps-1, arrLen, dp);
        
        return dp[idx][steps] = ((((stay)%mod + left)%mod + right)%mod)%mod;
    }
    
    int numWays(int steps, int arrLen) {
        
        vector<vector<int>> dp(steps+1, vector<int>(steps+1, -1));
        
        return helper(0, steps, arrLen, dp);

    }
};