class Solution {

private:
    int mod = 1e9 + 7;
    
    vector<int> dx = {-1, 0, 0, +1};
    vector<int> dy = {0, -1, +1, 0};
    
    int helper(int i, int j, int n, int m, vector<vector<int>>& grid, vector<vector<int>>& dp)
    {
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int ans = 1;
        
        for(int k = 0; k < 4; ++k)
        {
            int x = dx[k] + i;
            int y = dy[k] + j;
            
            if(x >= 0 and y >= 0 and x < n and y < m and grid[x][y] > grid[i][j])
            {
                ans += helper(x, y, n, m, grid, dp);
                ans %= mod;
            }
        }
        
        return dp[i][j] = ans;
        
    }
    
public:
    int countPaths(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                cnt += helper(i, j, n, m, grid, dp);
                cnt %= mod;
            }
        }
        
        return cnt % mod;
        
    }
};