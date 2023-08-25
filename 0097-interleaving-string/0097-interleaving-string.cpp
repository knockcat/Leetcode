class Solution {
    
private:
    bool helper(int i, int j, int k, string& s1, string& s2, string& s3, vector<vector<int> >& dp)
    {
        if(i == s1.size() and j == s2.size() and k == s3.size())
            return true;
        
        if(dp[i][j] != -1)
            return dp[i][j];
        
        bool one = false, two = false;
        
        if(i != s1.size())
        {
            if(s1[i] == s3[k])
                one = helper(i+1, j, k+1, s1, s2, s3, dp);
        }
        
        if(j != s2.size())
        {
            if(s2[j] == s3[k])
                two = helper(i, j+1, k+1, s1, s2, s3, dp);
        }
        
        return dp[i][j] = one | two;
    }
    
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        int n = s1.size(), m = s2.size();
        
        vector<vector<int> > dp(n+1, vector<int>(m+1, -1));
            
        return helper(0, 0, 0, s1, s2, s3, dp);
        
    }
};