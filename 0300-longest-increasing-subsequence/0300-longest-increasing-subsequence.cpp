class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        vector<int> next(n+1,0), curr(n+1,0);
        
        for(int i = n-1; i>= 0; --i)
        {
            for(int prev = i-1; prev >= -1; --prev)
            {
                int len = 0 + next[prev+1];
                if(prev == -1 or nums[i] > nums[prev])
                    len = max(len , 1 + next[i+1]);
                curr[prev+1] = len;
            }
            next = curr;
        }
        
        return next[0];
    }
};