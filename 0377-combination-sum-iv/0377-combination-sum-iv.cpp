class Solution {

private:
    int helper(int sum, vector<int>& nums, int target, vector<int>& dp)
    {
       if(sum > target)
           return 0;
        
       if(sum == target)
           return 1;
        
        if(dp[sum] != -1)
            return dp[sum];
        
        int ways = 0;
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] + sum <= target)
            {
                ways += helper(sum + nums[i], nums, target, dp);
            }
        }
      
        return dp[sum] = ways;
    }
    
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp(target+1, -1);
        
        return helper(0, nums, target, dp);
        
    }
};