class Solution {
public:
    
    int dp[55][55][55];
    
    const int mod = 1e9+7;
    
    int boundaryPaths(int i, int j, int n, int m, int maxMove)
    {
        if(maxMove >= 0 and i < 0 or j < 0 or i >= n or j >= m)
            return 1;
        
        if(dp[i][j][maxMove] != -1)
            return dp[i][j][maxMove];
        
        int up = 0, right = 0, down = 0, left = 0;
        
        if(maxMove)
        {
            up = boundaryPaths(i-1, j, n, m, maxMove-1);
            right = boundaryPaths(i, j+1, n, m, maxMove-1);
            down = boundaryPaths(i+1, j, n, m, maxMove-1);
            left = boundaryPaths(i, j-1, n, m, maxMove-1);
        }

        return dp[i][j][maxMove] = ((((up%mod + right%mod)%mod + down%mod)%mod + left%mod) % mod);
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        
        memset(dp, -1, sizeof(dp));
        
        return boundaryPaths(startRow, startColumn, m, n, maxMove);
        
    }
};