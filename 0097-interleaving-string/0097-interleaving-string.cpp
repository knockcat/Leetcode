class Solution {

private:
    bool helper(int i , int j, int n, int m, int M, string& s1, string& s2, string& s3, vector<vector<int> >& dp)
    {
        if(i == n and j == m and i+j == M)
            return true;
  
        bool result = false;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s1[i] == s3[i+j])
            result |= helper(i+1, j, n, m, M, s1, s2, s3, dp);
        
        if(s2[j] == s3[i+j])
            result |= helper(i, j+1, n, m, M, s1, s2, s3, dp);
        
        return dp[i][j] = result;
    }
    
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        int n = s1.size(), m = s2.size(), M = s3.size();
        
        if(n + m != M)
            return false;
        
        vector<vector<int> > dp(n+1, vector<int>(m+1, -1));
        
        return helper(0, 0, n, m, M, s1, s2, s3, dp);
        
    }
};