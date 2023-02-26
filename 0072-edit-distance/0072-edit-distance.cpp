#define ll long long
class Solution {
public:
    
    long long helper(int i, int j,int n, int m, string& word1, string& word2, vector<vector<int>>& dp )
    {   
        if(j >= m)
            return n - i;
        if(i >= n)
            return m - j;
        if(i >= n or j >= m)
            return INT_MAX;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        if(word1[i] == word2[j])
            return dp[i][j] = 0 + helper(i+1, j+1, n, m, word1, word2, dp);
        else
        {
            ll ins = 1 + helper(i,j+1,n,m, word1, word2, dp);
            ll del = 1 + helper(i+1, j,n,m, word1, word2, dp);
            ll rep = 1 + helper(i+1, j+1,n,m, word1, word2, dp);
            
            return dp[i][j] = min({ins, del, rep});
        }
    }
    
    int minDistance(string word1, string word2) {
        
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return helper(0,0,n,m,word1,word2,dp);
    }
};