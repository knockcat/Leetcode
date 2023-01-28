class Solution {
public:
    
    int helper(int i, int j, vector<int>& values, vector<vector<int>>& dp)
    {
        if(i == j)
            return 0;
        
        if(dp[i][j] !=  -1)
            return dp[i][j];
        
        int ans = INT_MAX;
        for(int k = i; k < j; ++k)
        {
            int steps = values[i-1] * values[k] * values[j] + helper(i,k, values, dp) + helper(k+1,j,values, dp);
            
            ans = min(ans, steps);
        }
        
        return dp[i][j] = ans;
    }
    
    int minScoreTriangulation(vector<int>& values) {
        
        int n = values.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        
        return helper(1,n-1,values, dp);
        
    }
};