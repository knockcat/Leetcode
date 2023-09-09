class Solution {
    
private:
    int helper(int idx, int sum, vector<int>& nums, int target, vector<vector<int>>& dp)
    {
        if(idx == nums.size())
        {
            return sum == target;
        }
        
        if(dp[idx][sum] != -1)
            return dp[idx][sum];
        
        int notTake = helper(idx+1, sum, nums, target, dp);
        
        int take = 0;
        
        if(sum + nums[idx] <= target)
            take = helper(0, sum + nums[idx], nums, target, dp);
        
        return dp[idx][sum] = take + notTake;
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
        
        return helper(0, 0, nums, target, dp);
        
    }
};