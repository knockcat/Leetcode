class Solution {
public:
    
    int helper(int index, int n, vector<int>& nums, vector<int>& dp)
    {
        if(index >= n)
            return 0;
        if(dp[index] != -1)
            return dp[index];
        int take = nums[index] +  helper(index + 2, n,nums,dp);
        int notTake = helper(index+1,n, nums , dp);
        
        return dp[index] = max(take, notTake);
    }
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> dp(n+1,0);
        
        dp[n-1] = nums[n-1];
        for(int i = n-2; i>=0; --i)
        {
            int take = 0;
            if(i+1 < n)
                take = nums[i] + dp[i+2];
            int notTake = dp[i+1];
            
            dp[i] = max(take, notTake);
        }
        
        return dp[0];
    }
};