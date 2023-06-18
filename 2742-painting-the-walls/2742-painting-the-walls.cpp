class Solution {
    
private:
    int helper(int idx, int walls, vector<int>& cost, vector<int>& time, vector<vector<int>>& dp)
    {
        if(walls <= 0)
            return 0;
        
        if(idx >= cost.size())
            return INT_MAX/2;
        
        if(dp[idx][walls] != -1)
            return dp[idx][walls];
        
        int notTake = helper(idx+1, walls, cost, time, dp);
        int take = cost[idx]  + helper(idx+1, walls - time[idx] - 1, cost, time, dp);
        
        return dp[idx][walls] = min(take, notTake);
    }
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        int n = cost.size();
        
        vector<vector<int>> dp(501, vector<int>(501, -1));
        
        return helper(0, n, cost, time, dp);
        
    }
};