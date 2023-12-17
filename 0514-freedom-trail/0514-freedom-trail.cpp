class Solution {
public:
    
    int helper(int idx, int ptr, int n, int m, string& ring, string& key, vector<vector<int>>& dp)
    {
        if(idx >= m)
            return 0;
        
        if(dp[idx][ptr] != -1)
            return dp[idx][ptr];
        
        int steps = 1e9;
        
        for(int i = 0; i < n; ++i)
        {
            if(ring[i] == key[idx])
                steps = min(steps, 1 + min(abs(i - ptr), n - abs(i-ptr)) + helper(idx+1, i, n, m, ring, key, dp));
        }
        
        return dp[idx][ptr] = steps;   
    }
    
    int findRotateSteps(string ring, string key) {
        
        int n = ring.size();
        int m = key.size();
        
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        
        return helper(0, 0, n, m, ring, key, dp);
        
    }
};