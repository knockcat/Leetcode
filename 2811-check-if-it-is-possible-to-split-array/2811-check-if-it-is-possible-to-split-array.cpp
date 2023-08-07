class Solution {
    
private:
    
    bool posibleToPartition(int start,  int end, int m, vector<int>& nums)
    {
        int sum = 0;
        
        for(int i = start; i <= end; ++i)
        {
            sum += nums[i];
            
            if(sum >= m)
                return true;
        }
        return false;
    }
    
    bool helper(int start, int end, int m, vector<int>& nums, vector<vector<int>>& dp)
    {
        if(start == end)
            return true;
        
        if(!posibleToPartition(start, end, m,  nums))
            return false;
        
        if(dp[start][end] != -1)
            return dp[start][end];
        
        for(int i = start; i < end; ++i)
        {
            bool leftHalf = helper(start,  i, m, nums, dp);
            bool rightHalf = helper(i+1 , end, m , nums, dp);
            
            if(leftHalf and rightHalf)
            {
                return dp[start][end] = true;
            }
        }
        return dp[start][end] = false;
    }
    
public:
    bool canSplitArray(vector<int>& nums, int m) {
        
        int n = nums.size();
        
        if(n <= 2)
            return true;
        
        vector<vector<int>> dp(n, vector<int>(n,-1));
        
        return helper(0, n-1, m, nums, dp);
        
    }
};