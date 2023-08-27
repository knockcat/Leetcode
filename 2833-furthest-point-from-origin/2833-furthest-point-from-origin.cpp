class Solution {

private:
    int helper(int idx, int currMove, string& moves, vector<vector<int>>& dp)
    {
        if(idx == moves.size())
            return currMove;
        
        if(dp[idx][currMove+51] != -1)
            return dp[idx][currMove+51];
        
        int first = INT_MIN, second = INT_MIN,  both = INT_MIN;
        
        if(moves[idx] == 'L')
            first = abs(helper(idx+1, currMove - 1 ,moves, dp));
        if(moves[idx] == 'R')
            second = abs(helper(idx+1, currMove + 1, moves, dp));
        
        if(moves[idx] == '_')
            both =  max(abs(helper(idx+1, currMove + 1,  moves, dp)) , abs(helper(idx+1,currMove - 1, moves, dp)));
        
         return dp[idx][currMove+51] = max({first, second, both});
    }
    
    // "_R__LL_"
    
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int n = moves.size();
        
        vector<vector<int>> dp(n+1, vector<int>(n+51, -1));
        
        int ans = helper(0, 0,moves, dp);
        
        return ans;
        
    }
};