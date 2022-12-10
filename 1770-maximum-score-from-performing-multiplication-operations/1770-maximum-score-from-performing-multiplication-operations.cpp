class Solution {
public:
    
    int helper(int index,vector<int>& nums, vector<int>& multipliers, int start, int end, vector<vector<int>>& dp)
    {
        if(index == multipliers.size())
            return 0;
        if(dp[index][start] != INT_MIN)
            return dp[index][start];
        
        return dp[index][start] = max(nums[start] * multipliers[index] + helper(index + 1, nums, multipliers,start+1,end, dp ), nums[end] * multipliers[index] + helper(index + 1,nums,multipliers,start,end-1, dp));
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n = nums.size();
        int m = multipliers.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,INT_MIN));
        return helper(0,nums,multipliers,0,n-1, dp);
    }
};