class Solution {
public:
    
    long long helper(int idx, int n, vector<int>& nums, int k, vector<long long>& dp)
    {
        if(idx >= n)
            return 0;
        
        long long ans = LONG_MAX;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        for(int i = 0; i < 3 and idx + i < n;  ++i)
        {
            long long take = (nums[idx] < k ?  k - nums[idx] : 0) + helper(idx+i+1, n, nums, k , dp);
            
            ans = min(ans, take);
        }
        
        return dp[idx] = ans;
    }
    
    long long minIncrementOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<long long> dp(n+1, -1);
        
        long long op1 =  helper(0, n, nums, k, dp);
        long long op2 = helper(1, n, nums, k, dp);
        long long op3 = helper(2, n, nums, k, dp);
        
        return min({op1, op2, op3});
        
    }
};