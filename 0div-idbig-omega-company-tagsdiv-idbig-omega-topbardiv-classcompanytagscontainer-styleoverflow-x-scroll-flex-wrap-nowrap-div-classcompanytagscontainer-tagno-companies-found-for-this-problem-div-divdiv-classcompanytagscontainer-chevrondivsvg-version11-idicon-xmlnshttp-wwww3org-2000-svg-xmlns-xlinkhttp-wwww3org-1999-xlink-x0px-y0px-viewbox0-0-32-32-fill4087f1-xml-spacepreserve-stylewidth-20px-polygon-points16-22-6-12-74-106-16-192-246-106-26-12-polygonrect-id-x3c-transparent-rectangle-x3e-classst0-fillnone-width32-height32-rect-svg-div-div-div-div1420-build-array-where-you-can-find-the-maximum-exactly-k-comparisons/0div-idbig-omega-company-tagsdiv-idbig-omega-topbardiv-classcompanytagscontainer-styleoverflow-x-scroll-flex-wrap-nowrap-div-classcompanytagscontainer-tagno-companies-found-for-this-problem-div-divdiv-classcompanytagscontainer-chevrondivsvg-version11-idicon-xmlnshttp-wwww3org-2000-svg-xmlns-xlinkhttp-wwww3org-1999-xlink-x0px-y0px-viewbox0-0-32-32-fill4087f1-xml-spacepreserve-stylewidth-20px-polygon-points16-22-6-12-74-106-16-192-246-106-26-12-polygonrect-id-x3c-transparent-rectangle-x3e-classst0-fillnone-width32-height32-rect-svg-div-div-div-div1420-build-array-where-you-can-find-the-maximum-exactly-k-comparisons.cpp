class Solution {
public:
    int numOfArrays(int n, int m, int h) {
        int64_t dp[n][h+1][m+1];
        memset(dp, 0, (n)*(h+1)*(m+1)*sizeof(int64_t));
        for(int i = 0; i < n; ++i) {
            for(int j = 1; j <= h; ++j) {
                for(int k = j; k <= m; ++k) {
                    dp[i][j][k] = dp[i][j][k-1];
                    if(i == 0) {
                        dp[i][j][k] += j == 1 ? 1 : 0;
                        continue;
                    }
                    dp[i][j][k] = (dp[i][j][k] + dp[i-1][j-1][k-1] + (dp[i-1][j][k] + MOD - dp[i-1][j][k-1]) * k) % MOD;
                } 
            }
        }
        return dp[n-1][h][m];
    }
    static const int MOD = 1e9+7;
};