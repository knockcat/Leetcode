class Solution {

private:
    
    bool helper(int idx, int n, vector<int>& nums, vector<int>& dp)
    {
        if(idx == n)
            return true;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        if(idx + 1 < n and nums[idx] == nums[idx+1])
        {
            if(helper(idx+2, n, nums, dp))
                return true;
            
            if(idx + 2 < n and nums[idx] == nums[idx+2])
            {
                if(helper(idx+3, n, nums , dp))
                    return true;
            }
        }
        
        if(idx + 2 < n and nums[idx] == nums[idx+1] - 1 and nums[idx] == nums[idx+2] - 2)
        {
            if(helper(idx + 3, n, nums, dp))
                return true;
        }
        
        return dp[idx] = false;
    }
    
public:
    bool validPartition(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> dp(n+1, -1);
        
        return helper(0, n, nums, dp);
        
    }
};