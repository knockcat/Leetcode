class Solution {
 
private:
    int helper(int i, int j, int n, int m, string& s1, string& s2, vector<vector<int>>& dp)
    {
        if(i == n and j == m)
            return 0;
        if(i == n)
        {
            int deleteS2 = 0;
            
            for(int k = j; k < m; ++k)
            {
                deleteS2 += s2[k];    
            }
            
            return deleteS2;
        }
        
        if(j == m)
        {
            int deleteS1 = 0;
            
            for(int k = i; k < n; ++k)
            {
                deleteS1 += s1[k];
            }
            
            return deleteS1;
        }
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(s1[i] == s2[j])
            return dp[i][j] = helper(i+1, j+1, n, m, s1, s2, dp);
        else
        {
            return dp[i][j] = min(s1[i] + helper(i+1, j, n, m, s1, s2, dp), s2[j] + helper(i, j+1, n, m, s1, s2, dp));
        }
    }
    
public:
    int minimumDeleteSum(string s1, string s2) {
        
        int n = s1.size(), m = s2.size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return helper(0, 0, n, m, s1, s2, dp);
        
    }
};