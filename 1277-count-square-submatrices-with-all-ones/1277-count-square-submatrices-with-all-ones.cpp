class Solution {

private:
    int helper(int i, int j, int n, int m, vector<vector<int>>& matrix, vector<vector<int>>& dp)
    {
        if(i < 0 or j < 0)
            return 0;
        
        if(matrix[i][j] == 0)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        int topLeft = helper(i-1, j-1, n, m, matrix, dp);
        int topRight = helper(i-1, j, n, m, matrix, dp);
        int bottomLeft = helper(i,j-1, n, m, matrix, dp);
        
        return dp[i][j] = 1 + min({topLeft, topRight, bottomLeft});
    }
    
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        int squareSubmatrices = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                squareSubmatrices += helper(i, j, n, m,  matrix, dp);
            }
        }
        
        return squareSubmatrices;
    }
};