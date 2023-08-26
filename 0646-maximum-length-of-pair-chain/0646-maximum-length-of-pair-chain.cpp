class Solution {
    
private:
    int helper(int idx, int prev,  int n, vector<vector<int>>& pairs, vector<vector<int> >& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx][prev + 1] != -1)
            return dp[idx][prev + 1];
        
        int take = 0;
        
        int notTake = helper(idx + 1, prev, n, pairs, dp);
        
        if(prev == -1 or pairs[idx][0] > pairs[prev][1])
            take = max(1 + helper(idx + 1, idx, n, pairs, dp), notTake);
        
        return dp[idx][prev + 1] = max(take, notTake);
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(), pairs.end());
        
        int n = pairs.size();
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        return helper(0, -1, n, pairs,  dp);
        
    }
};