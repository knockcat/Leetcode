class Solution {
public:
    
    bool isPalindrome(int start, int end, string& s)
    {
        while(start <= end)
        {
            if(s[start] != s[end])
                return false;
            ++start, --end;
        }
        return true;
    }

    int helper(int idx, string& s,vector<int>& dp)
    {
        if(idx == s.size())
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int ans = INT_MAX;
        for(int i =idx ; i < s.size(); ++i)
        {
            if(isPalindrome(idx, i, s))
            {
                int cost = 1 + helper(i+1,s,dp);
                ans = min(ans,cost);
            }
        }
        return dp[idx] = ans;
    }
    
    int minCut(string s) {
        
        int n = s.size();
        
        vector<int> dp(n+1,-1);
        
        return helper(0,s,dp) - 1;

    }
};