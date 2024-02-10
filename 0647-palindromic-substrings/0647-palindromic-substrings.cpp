class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.size();
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        int cnt = 0;
        
        for(int diff = 0; diff < n; ++diff)
        {
            for(int i = 0, j = diff; i < n and j < n; ++i, ++j)
            {
                if(i == j)
                {
                    ++cnt;
                    dp[i][j] = 1;
                }
                else if(diff == 1 and s[i] == s[j])
                {
                    ++cnt;
                    dp[i][j] = 2;
                }
                else if(diff > 1 and s[i] == s[j] and dp[i+1][j-1])
                {
                    ++cnt;
                    dp[i][j] = dp[i+1][j-1] + 2;
                }
            }
        }
        
        return cnt;
    }
};