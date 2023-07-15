class Solution {
    
private:
    int helper(int idx, int k, int n, vector<vector<int>>& events, vector<vector<int>>& dp)
    {
        if(idx >= n)
            return 0;
        
        if(dp[idx][k] != -1)
            return dp[idx][k];
        
        int ans = helper(idx+1, k , n, events, dp);
        
        if(k)
        {
            int pos = n;
            for(int i = idx+1; i < n; ++i)
            {
                if(events[i][0] > events[idx][1])
                {
                    pos = i;
                    break;
                }
            }
            ans = max(ans , events[idx][2] + helper(pos, k-1, n, events, dp));
        }
            
        return dp[idx][k] = ans;
    }
public:
    int maxValue(vector<vector<int>>& events, int k) {
        
        int n = events.size();
        
        sort(events.begin(), events.end());
        
        vector<vector<int>> dp(n+1, vector<int>(k+1,-1));
        
        return helper(0, k, n, events, dp);
    }
};
 