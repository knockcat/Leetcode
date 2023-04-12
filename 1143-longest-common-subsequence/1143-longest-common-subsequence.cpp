class Solution {
public:
    
    int helper(int i, int j, string& text1, string& text2, int n, int m, vector<vector<int>>& dp)
    {
        if(i == n or j == m)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(text1[i] == text2[j])
            return dp[i][j] = 1 + helper(i+1, j+1, text1, text2, n ,m, dp);
        return dp[i][j] = max(helper(i,j+1, text1, text2, n, m, dp), helper(i+1, j, text1, text2, n, m, dp));
    }
    
    
    int longestCommonSubsequence(string text1, string text2) {
        
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
        return helper(0,0,text1, text2, text1.size(), text2.size(),dp);
        
    }
};