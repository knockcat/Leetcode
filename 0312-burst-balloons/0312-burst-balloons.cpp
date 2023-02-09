#define ll long long int
class Solution {
public:
    
    int helper(int i , int j,  vector<int>& nums, vector<vector<int>>& dp)
    {
        if(i > j)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int ans = INT_MIN;
        for(int idx = i; idx <= j; ++idx)
        {
            int coins = nums[i-1] * nums[idx] * nums[j+1] + helper(i, idx-1, nums, dp)  + helper(idx+1, j,nums, dp);
            ans = max(ans,coins);
        }
        return dp[i][j] = ans;
    }
    
    int maxCoins(vector<int>& nums) {
        
        int n = nums.size();
        
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        
        // vector<vector<int>> dp(n+2,vector<int>(n+2,-1));
        vector<vector<int>>dp(n+2,vector<int>(n+2,0));
        
        // return helper(1,n, nums, dp);
        
        for(int i = n; i >= 1; --i)
        {
            for(int j = 1; j<=n; ++j)
            {
                if(i > j)
                    continue;
                ll ans = INT_MIN;
                
                for(int idx = i; idx <= j; ++idx)
                {
                    ll cost = (ll)nums[i-1] * nums[idx] * nums[j+1] + dp[i][idx-1] + dp[idx+1][j];
                    ans = max(ans, cost);
                }
                dp[i][j] = ans;
            }
        }
        return dp[1][n];
    }
};