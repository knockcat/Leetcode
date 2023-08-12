class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
        int ans = 0;
        
        for(int i = 0;  i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(i == 0 or j == 0)
                    dp[i][j] = matrix[i][j] - 48;
                
                if(i > 0 and j > 0 and matrix[i][j] != '0')
                {
                    int leftDiagonal = dp[i-1][j-1];
                    int bottomLeft = dp[i][j-1];
                    int topRight = dp[i-1][j];
                    
                    dp[i][j] = min({leftDiagonal, bottomLeft, topRight}) + 1;
                }
                ans = max(ans,dp[i][j]);
            }
        }
        
        return ans * ans;
        
    }
};