class Solution {
public:

    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        for(int i = n-1; i>=0; --i)
        {
            for(int prev = i-1; prev >= -1; --prev)
            {
                int len = dp[i+1][prev+1];
                if(prev == -1 or nums[i] > nums[prev])
                    len = max(len , 1 + dp[i+1][i+1]);
                dp[i][prev + 1] = len;
            }
        }
        
        return dp[0][0];
    }
};

 