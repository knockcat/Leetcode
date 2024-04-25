class Solution {
public:
    
    int helper(int idx, int prev, int k, int n, string& s, vector<vector<int>>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx][prev+1] != -1)
            return dp[idx][prev+1];
        
        int notTake = helper(idx+1, prev, k, n, s, dp);
        
        int take = 0;
        int curr = s[idx];
        if(prev == -1 or abs(prev - curr) <= k)
            take = max(1 + helper(idx+1, curr, k, n, s, dp), notTake);
        
        return dp[idx][prev+1] = max(take, notTake);
    }
    
    int longestIdealString(string s, int k) {
        
        int n = s.size();
        
        vector<vector<int>> dp(n+1, vector<int>(150, -1));
        
        return helper(0, -1, k, n, s, dp);
        
    }
};