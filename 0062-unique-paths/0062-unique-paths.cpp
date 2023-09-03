class Solution {
    
private:
    int helper(int i, int j, int n, int m, vector<vector<int>>& dp)
    {
        if(i == n-1 and j == m-1)
            return 1;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int down = 0, right = 0;
        
        if(i+1 < n)
            down = helper(i+1, j, n, m, dp);
        if(j+1 < m)
            right = helper(i, j+1, n, m, dp);
            
        return dp[i][j] = down + right;
    }
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int> > dp(m+1, vector<int>(n+1, -1));
        
        return helper(0, 0, m , n, dp);
        
    }
};