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
        vector<vector<int>> dp(n+1,vector<int>(n+1,INT_MAX));
        
        for(int i = 0; i<n; ++i)
            dp[i][i] = 0;
        
        for(int i = n-1; i>=1; --i)
        {
            for(int j = i+1; j<n; ++j) 
            {
                int ans = INT_MAX;
                for(int k = i; k < j; ++k)
                {
                    int steps = values[i-1] * values[k] * values[j] + dp[i][k] + dp[k+1][j];
                    
                    ans =  min(ans,steps);
                }
                dp[i][j] = ans;
            }
        }
        
        return dp[1][n-1];
    }
};