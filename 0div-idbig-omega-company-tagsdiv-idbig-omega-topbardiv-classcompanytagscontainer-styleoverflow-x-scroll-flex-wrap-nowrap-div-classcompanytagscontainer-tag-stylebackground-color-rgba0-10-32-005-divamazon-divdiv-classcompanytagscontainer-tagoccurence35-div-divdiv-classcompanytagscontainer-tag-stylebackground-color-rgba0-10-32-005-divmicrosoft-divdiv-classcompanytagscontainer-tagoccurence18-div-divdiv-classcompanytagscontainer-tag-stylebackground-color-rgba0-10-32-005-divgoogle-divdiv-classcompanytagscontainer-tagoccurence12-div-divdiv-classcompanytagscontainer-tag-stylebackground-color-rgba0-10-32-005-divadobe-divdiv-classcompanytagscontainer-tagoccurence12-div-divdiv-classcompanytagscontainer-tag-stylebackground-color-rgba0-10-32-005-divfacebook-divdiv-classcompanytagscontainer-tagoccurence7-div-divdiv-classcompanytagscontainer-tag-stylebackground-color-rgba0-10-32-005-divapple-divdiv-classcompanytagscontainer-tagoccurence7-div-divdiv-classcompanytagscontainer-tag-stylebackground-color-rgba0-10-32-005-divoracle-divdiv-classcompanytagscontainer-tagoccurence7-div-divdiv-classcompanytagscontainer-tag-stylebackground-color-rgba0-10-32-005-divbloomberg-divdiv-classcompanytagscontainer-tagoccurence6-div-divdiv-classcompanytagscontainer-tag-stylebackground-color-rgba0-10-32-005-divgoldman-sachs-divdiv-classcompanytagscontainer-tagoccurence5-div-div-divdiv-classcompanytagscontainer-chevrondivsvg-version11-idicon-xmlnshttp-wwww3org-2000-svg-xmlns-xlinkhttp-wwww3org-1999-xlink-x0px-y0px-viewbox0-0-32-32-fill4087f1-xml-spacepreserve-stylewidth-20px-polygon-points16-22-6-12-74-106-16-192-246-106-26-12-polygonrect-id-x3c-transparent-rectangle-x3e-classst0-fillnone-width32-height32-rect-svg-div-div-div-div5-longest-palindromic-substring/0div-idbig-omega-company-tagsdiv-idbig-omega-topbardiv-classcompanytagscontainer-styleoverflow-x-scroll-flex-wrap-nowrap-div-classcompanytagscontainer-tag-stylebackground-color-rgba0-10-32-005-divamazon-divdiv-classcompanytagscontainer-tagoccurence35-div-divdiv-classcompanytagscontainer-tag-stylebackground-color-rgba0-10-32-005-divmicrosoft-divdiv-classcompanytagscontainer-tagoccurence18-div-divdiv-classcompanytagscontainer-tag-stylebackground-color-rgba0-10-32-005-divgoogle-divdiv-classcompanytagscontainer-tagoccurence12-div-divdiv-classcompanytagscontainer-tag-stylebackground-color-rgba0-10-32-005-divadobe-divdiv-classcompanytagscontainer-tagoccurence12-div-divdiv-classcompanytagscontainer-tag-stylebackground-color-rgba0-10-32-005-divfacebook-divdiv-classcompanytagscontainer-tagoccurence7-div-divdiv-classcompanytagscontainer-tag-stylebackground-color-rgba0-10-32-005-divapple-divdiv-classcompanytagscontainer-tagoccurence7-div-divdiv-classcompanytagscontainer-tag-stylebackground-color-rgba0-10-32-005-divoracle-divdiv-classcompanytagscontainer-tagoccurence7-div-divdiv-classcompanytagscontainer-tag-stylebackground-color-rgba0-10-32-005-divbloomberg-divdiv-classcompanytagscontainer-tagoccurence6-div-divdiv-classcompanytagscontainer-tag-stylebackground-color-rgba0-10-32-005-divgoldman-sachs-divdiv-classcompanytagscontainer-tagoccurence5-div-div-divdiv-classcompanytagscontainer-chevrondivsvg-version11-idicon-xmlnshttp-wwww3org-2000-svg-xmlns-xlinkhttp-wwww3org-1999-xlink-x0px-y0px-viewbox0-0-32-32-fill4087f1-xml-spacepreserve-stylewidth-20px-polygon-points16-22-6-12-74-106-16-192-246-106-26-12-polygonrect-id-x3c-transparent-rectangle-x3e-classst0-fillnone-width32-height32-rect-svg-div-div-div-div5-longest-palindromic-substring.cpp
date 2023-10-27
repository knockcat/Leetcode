class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        int maxLength = 0;
        
        string ans;
        
        for(int diff = 0; diff < n; ++ diff)
        {
            for(int i = 0, j = diff; i < n and j < n; ++i, ++j)
            {
                if(i == j)
                {
                    dp[i][j] = 1;
                }
                else if(diff == 1 and s[i] == s[j])
                {
                    dp[i][j] = 2;
                }
                else if(diff > 1 and s[i] == s[j] and dp[i+1][j-1])
                {
                    dp[i][j] = dp[i+1][j-1] + 2;
                }
                
                if(dp[i][j] > maxLength)
                {
                    maxLength = dp[i][j];
                    ans = s.substr(i, j-i+1);
                }
            }
        }
        
        return ans;
    }
};