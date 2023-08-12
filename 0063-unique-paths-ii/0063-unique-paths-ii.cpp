class Solution {

private:
    int helper(int i, int j, int n, int m, vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp)
    {
        if(i == n-1 and j == m-1)
        {
            return obstacleGrid[i][j] == 0;
        }
        
        if(i > n or j > m or i < n and j < m and obstacleGrid[i][j] == 1)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int right = helper(i, j+1, n, m, obstacleGrid, dp);
        
        int bottom = helper(i+1, j, n, m, obstacleGrid, dp);
        
        return dp[i][j] = right + bottom;
    }
    
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return helper(0,0, n, m, obstacleGrid, dp);
        
    }
};