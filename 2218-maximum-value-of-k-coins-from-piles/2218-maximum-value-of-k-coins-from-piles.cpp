class Solution {
public:
    
    int helper(int i, int n, vector<vector<int>>& piles, int k, vector<vector<int>>& dp)
    {
        if(i >= n or k == 0)
            return 0;
        
        if(dp[i][k] != -1)
            return dp[i][k];
        
        int take = 0, notTake = 0;
        int sum = 0;
        int size = piles[i].size();
        
        notTake = helper(i+1, n , piles, k, dp);
        
        for(int j = 0; j < min(k,size); ++j )
        {
            sum += piles[i][j];
            take = max(take, sum + helper(i+1, n, piles, k-j-1, dp));
        }
        
        return dp[i][k] = max(take,notTake);
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        
        int n = piles.size();
        vector<vector<int>> dp(n+1, vector<int>(k+1,-1));
        return helper(0, n, piles, k, dp);
        
    }
};