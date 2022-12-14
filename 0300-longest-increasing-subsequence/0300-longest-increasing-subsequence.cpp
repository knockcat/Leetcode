class Solution {
public:
    
    int helper(int index, vector<int>& nums, int prev, vector<vector<int>>& dp)
    {
        if(index == nums.size())
            return 0;
        if(dp[index][prev + 1] != -1)
            return dp[index][prev+1];
        int len = 0 + helper(index+1, nums,prev,dp);
        if(prev == -1 or nums[index] > nums[prev])
            len = max(len , 1 + helper(index+1, nums,  index, dp));
        
        return dp[index][prev+1] = len;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return helper(0,nums,-1, dp);
    }
};