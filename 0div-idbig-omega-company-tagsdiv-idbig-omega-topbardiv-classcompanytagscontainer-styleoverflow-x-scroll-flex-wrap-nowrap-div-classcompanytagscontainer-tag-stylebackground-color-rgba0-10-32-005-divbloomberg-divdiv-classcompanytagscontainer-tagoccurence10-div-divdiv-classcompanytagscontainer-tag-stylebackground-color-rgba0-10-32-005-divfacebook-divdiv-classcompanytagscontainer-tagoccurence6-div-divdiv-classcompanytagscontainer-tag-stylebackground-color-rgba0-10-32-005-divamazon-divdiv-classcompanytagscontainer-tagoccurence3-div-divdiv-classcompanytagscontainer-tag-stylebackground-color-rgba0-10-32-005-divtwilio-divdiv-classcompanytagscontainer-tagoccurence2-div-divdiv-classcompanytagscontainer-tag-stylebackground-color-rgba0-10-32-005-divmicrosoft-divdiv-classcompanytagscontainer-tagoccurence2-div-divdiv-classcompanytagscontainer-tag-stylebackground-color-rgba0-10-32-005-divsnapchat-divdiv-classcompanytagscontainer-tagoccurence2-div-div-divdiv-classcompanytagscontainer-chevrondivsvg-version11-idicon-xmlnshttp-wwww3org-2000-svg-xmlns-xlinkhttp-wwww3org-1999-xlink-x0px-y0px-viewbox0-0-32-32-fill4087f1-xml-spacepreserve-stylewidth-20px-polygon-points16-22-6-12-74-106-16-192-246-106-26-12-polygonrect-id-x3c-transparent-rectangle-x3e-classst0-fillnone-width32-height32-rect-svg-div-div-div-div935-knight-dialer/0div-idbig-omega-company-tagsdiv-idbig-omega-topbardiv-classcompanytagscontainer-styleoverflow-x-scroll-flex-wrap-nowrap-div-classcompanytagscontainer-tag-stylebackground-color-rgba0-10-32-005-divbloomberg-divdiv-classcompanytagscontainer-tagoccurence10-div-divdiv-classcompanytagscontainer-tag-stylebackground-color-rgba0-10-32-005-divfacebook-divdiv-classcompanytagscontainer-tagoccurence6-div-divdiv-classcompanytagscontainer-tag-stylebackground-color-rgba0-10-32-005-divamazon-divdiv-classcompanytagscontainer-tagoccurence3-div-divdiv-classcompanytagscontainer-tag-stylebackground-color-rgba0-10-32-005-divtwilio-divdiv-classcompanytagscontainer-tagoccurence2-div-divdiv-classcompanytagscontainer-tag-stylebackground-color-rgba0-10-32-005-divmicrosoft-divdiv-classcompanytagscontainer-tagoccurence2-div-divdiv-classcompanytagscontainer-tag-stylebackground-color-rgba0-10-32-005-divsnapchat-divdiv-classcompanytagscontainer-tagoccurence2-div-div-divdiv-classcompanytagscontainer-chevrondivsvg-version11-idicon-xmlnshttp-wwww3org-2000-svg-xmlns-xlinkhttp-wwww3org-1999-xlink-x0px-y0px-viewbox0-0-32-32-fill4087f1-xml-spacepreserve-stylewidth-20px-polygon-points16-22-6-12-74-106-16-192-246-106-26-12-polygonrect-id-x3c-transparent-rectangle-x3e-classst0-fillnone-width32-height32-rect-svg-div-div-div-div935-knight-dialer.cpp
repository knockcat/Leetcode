class Solution {
public:
    
    const int mod = 1e9+7;
    
    vector<int> dx = {-2, -2, -1 , -1, +2, +2, +1, +1};
    vector<int> dy = {-1, +1, -2, +2, -1, +1, -2, +2};
    
    int helper(int i, int j, int n, vector<vector<vector<int>>>& dp)
    {
        if(n == 1)
            return 1;
        
        if(dp[i][j][n] != -1)
            return dp[i][j][n];
        
        int count = 0;
        
        for(int k = 0; k < 8; ++k)
        {
            int x = dx[k] + i;
            int y = dy[k] + j;
            
            if(x >= 0 and x < 4 and y >= 0 and y < 3)
            {
                if(x == 3 and (y == 0 or y == 2))
                    continue;
                count = (count + helper(x, y, n-1, dp)) % mod;
            }
        }
        
        return dp[i][j][n] = count;
    }
    
    int knightDialer(int n) {
        
        int count = 0;
        
        vector<vector<vector<int>>> dp(4, vector<vector<int>>(3, vector<int>(n+1,-1)));
        
        for(int i = 0; i < 4; ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                if(i == 3 and (j == 0 or j == 2))
                    continue;
                count = (count + helper(i,j,n,dp)) % mod;
            }
        }
        
        return count;
    }
};