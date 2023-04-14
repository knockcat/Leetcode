class Solution {
public:
    
    int helper(int i, int j, string& s, string& t, int n, vector<vector<int>>& dp)
    {
        if(i >= n or j >= n)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s[i] == t[j])
            return dp[i][j] = 1 + helper(i+1, j+1, s, t, n, dp);
        
        return dp[i][j] = max(helper(i+1,j, s, t, n, dp), helper(i, j+1, s, t, n, dp));
    }
    
    int longestPalindromeSubseq(string s) {
        
        int n = s.size();
        string t = s;
        reverse(t.begin(),t.end());
        
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        
        return helper(0, 0, s, t, n, dp);
    }
};