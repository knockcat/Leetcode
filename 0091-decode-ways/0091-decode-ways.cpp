class Solution {
public:
    
    int helper(int idx, int n, string& s, vector<int>& dp)
    {
        if(idx == n)
            return 1;
        
        if(s[idx] == '0')
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int first = 0, second = 0;
        
        if(idx + 2 <= n)
        {
            string curr = s.substr(idx, 2);
            
            if(stoi(curr) >= 1 and stoi(curr) <= 26)
            {
                first = helper(idx + 2, n, s, dp);
            }
        }
        
        int ch = s[idx] - '0';
        
        if(ch >= 1 and ch <= 26)
            second = helper(idx + 1,n, s, dp);
        
        return dp[idx] = first + second;
    }
    
    int numDecodings(string s) {
        
        int n = s.size();
        
        vector<int> dp(n+1, -1);
        
        return helper(0, n, s, dp);
        
    }
};