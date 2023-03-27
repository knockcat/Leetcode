class Solution {
public:
    
    int helper(int i,int j1, int j2, int n, int m, vector<vector<int>>& grid, vector<vector<vector<int>>>& dp)
    {
        if(j1 < 0 or j1 >= m or j2 < 0 or j2 >= m)
            return -1e8;
        
        if(i == n - 1)
        {
            if(j1 == j2)
                return dp[i][j1][j2] = grid[i][j1];
            else return dp[i][j1][j2] = grid[i][j1] + grid[i][j2];
        }
        
        if(dp[i][j1][j2] != -1)
            return dp[i][j1][j2];
        
        int ans = -1e8;
        for(int d1 = -1 ; d1 <= +1; ++d1)
        {
            for(int d2 = -1; d2 <= +1; ++d2)
            {
                int value = 0;
                if(j1 == j2)
                    value = grid[i][j1];
                else
                    value = grid[i][j1] + grid[i][j2];
                
                value += helper(i+1,j1 + d1 , j2 + d2, n, m, grid, dp);
                ans = max(ans, value);
                    
            }
        }
        return dp[i][j1][j2] = ans;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {

        int n = grid.size(), m = grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        
        return helper(0,0,m-1,n,m, grid, dp);
    }
};