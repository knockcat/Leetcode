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
        
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
        int squareSubmatrices = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(i == 0 or j == 0)
                    dp[i][j] = matrix[i][j];
                
                if(i > 0 and j > 0 and matrix[i][j] != 0)
                {
                    int leftDiag = dp[i-1][j-1];
                    int left = dp[i][j-1];
                    int top = dp[i-1][j];
                    
                    dp[i][j] = min({leftDiag, left,  top}) + 1;
                }
                
                squareSubmatrices += dp[i][j];
            }
        }
        
        return squareSubmatrices;
    }
};