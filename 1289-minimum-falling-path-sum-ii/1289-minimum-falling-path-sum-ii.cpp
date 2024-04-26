class Solution {
public:
    
    int helper(int idx, int prev, int n, vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx][prev+1]  != -1)
            return dp[idx][prev+1];
        
        int ans = INT_MAX;
        for(int j = 0; j < n; ++j)
        {
            if(j != prev)
            {
                int curr = grid[idx][j] + helper(idx+1, j, n, grid, dp);
                ans = min(ans, curr);
            }
        }
        
        return dp[idx][prev+1] = ans;
    }
    
    int minFallingPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        return helper(0, -1, n, grid, dp);
    }
};