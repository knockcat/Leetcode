class Solution {
public:
    
    int helper(int index, vector<int>& nums, vector<int>& dp)
    {
        if(index >= nums.size())
            return 0;
        
        if(dp[index] != -1)
            return dp[index];
        
        int pick = nums[index] + helper(index+2, nums, dp);
        int nopick = helper(index+1, nums, dp);
        
        return dp[index] = max(pick,nopick);
    }
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n,-1);
        
        return helper(0,nums, dp);
    }
};