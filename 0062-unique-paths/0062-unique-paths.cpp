class Solution {
public:
    
    int helper(int i , int j, int n, int m, vector<vector<int>>& dp)
    {
        if(i >= n or j >= m)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(i == n-1 and j == m-1)
            return 1;
        
        return dp[i][j] = helper(i+1,j, n, m, dp) + helper(i, j + 1, n, m, dp);
    }
    
    
    int uniquePaths(int m, int n) {
        
        // vector<vector<int>> dp(m+1, vector<int>(n+1,0));
        
        vector<int> prev(n+1,0), curr(n+1,0);
        
        // return helper(0,0,m,n, dp);
        
        for(int i = m-1; i>=0; --i)
        {
            for(int j = n-1; j >= 0; --j)
            {
                if(i == m-1 and j == n-1)
                    curr[j] = 1;
                else
                    curr[j] = prev[j] + curr[j + 1];
            }
            prev = curr;
        }
        
        return prev[0];
    }
};