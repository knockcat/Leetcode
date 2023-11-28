class Solution { 
public:
    
    const int mod = 1e9+7;
    
    int helper(int idx, int cnt, int n, string& corridor, vector<vector<int>>& dp)
    {
        if(cnt > 2)
            return 0;
        
        if(idx == n)
        {
            return (cnt == 2);
        }
        
        if(dp[idx][cnt] != -1)
            return dp[idx][cnt];
        
        int ans = 0;
        
        if(corridor[idx] == 'S')
        {
            ans = (ans + helper(idx+1, cnt+1, n, corridor, dp)) % mod;
            if(cnt == 2)
                ans = (ans + helper(idx+1, 1, n, corridor, dp)) % mod;
        }
        else
        {
            ans = (ans + helper(idx+1, cnt, n, corridor, dp)) % mod;
            if(cnt == 2)
                ans = (ans + helper(idx+1, 0, n, corridor, dp)) % mod;
        }
        return dp[idx][cnt] = ans;
    }
    
    int numberOfWays(string corridor) {
        
        int n = corridor.size();
        
        vector<vector<int>> dp(n, vector<int>(3, -1));
        
        return helper(0, 0, n, corridor, dp);

    }
};