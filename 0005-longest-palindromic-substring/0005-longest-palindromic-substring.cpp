class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        
        string ans;
        
        int maxLength = 0;
        
        for(int diff = 0; diff < n; ++diff)
        {
            for(int i = 0, j = i+diff; i < n and j < n; ++i, ++j)
            {   
                if(i == j)
                    dp[i][j] = 1;
                else if(diff == 1)
                {
                    if(s[i] == s[j])
                    {
                        dp[i][j] = 2;
                    }
                }
                else
                {
                    if(s[i] == s[j])
                    {
                        if(dp[i+1][j-1])
                        {
                            dp[i][j] = dp[i+1][j-1] + 2;
                        }
                    }
                }
                
                int len = j - i + 1;
                
                if(dp[i][j] > maxLength)
                    ans = s.substr(i,len);
                
            }
        }
        
        return ans;
    }
};