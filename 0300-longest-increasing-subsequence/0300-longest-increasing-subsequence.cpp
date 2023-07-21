class Solution {

private:
    int helper(int idx, int prev, int n, vector<int>& nums, vector<vector<int>>& dp)
        {
            if(idx == n)
                return 0;

            if(dp[idx][prev+1] != -1)
            {
                return dp[idx][prev+1];
            }

            int notTake = helper(idx+1, prev, n, nums, dp);

            int take = 0;

            if(prev == -1 or nums[idx] > nums[prev])
                take = 1 + helper(idx+1, idx, n, nums, dp);

            return dp[idx][prev+1] = max(take, notTake);
    }    
    
    
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        
        return helper(0, -1, n, nums, dp);
        
    }
};