class Solution {
public:
    
    int helper(int idx, int n, string& str, vector<int>& dp)
    {   
        if(idx == n)
        {
            return 1;
        }
        
        if(str[idx] == '0')
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int first = 0, second = 0;
        
        if(idx + 2 <= n)
        {
            string curr = str.substr(idx, 2);
            
            int num = stoi(curr);
            
            if(num >= 1 and num <= 26)
            {
                first = helper(idx+2, n, str, dp);
            }
        }
        
        int num = str[idx] - '0';
        
        if(num >= 1 and num <= 26)
        {
            second = helper(idx+1, n, str, dp);
        }
        
        return dp[idx] = first + second;
    }
    
    int numDecodings(string s) {
        
        int n = s.size();
        
        vector<int> dp(n+1, -1);
        
        return helper(0, n, s, dp);
        
    }
};