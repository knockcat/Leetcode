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
        vector<int> dp(n,-1);
        return helper(0,n,nums,dp);
    }
};