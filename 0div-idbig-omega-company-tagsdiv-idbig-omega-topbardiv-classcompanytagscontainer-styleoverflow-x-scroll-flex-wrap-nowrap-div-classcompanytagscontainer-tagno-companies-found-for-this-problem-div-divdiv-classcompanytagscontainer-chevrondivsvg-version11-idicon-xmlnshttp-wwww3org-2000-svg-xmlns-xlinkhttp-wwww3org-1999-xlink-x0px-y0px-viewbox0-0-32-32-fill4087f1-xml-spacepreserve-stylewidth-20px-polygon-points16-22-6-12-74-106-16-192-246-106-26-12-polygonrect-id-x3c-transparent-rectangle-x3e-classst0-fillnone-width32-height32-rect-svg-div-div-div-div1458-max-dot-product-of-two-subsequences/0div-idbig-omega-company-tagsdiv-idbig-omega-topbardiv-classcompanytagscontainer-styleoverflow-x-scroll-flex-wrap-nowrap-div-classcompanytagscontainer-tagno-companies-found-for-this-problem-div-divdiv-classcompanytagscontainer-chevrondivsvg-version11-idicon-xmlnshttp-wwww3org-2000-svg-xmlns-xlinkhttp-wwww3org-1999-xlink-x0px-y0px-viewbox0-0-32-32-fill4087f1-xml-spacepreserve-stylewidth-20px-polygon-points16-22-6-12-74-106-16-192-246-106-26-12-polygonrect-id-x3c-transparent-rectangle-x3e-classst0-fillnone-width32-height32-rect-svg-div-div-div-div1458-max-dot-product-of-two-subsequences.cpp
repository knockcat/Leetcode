class Solution {
public:
    
    int helper(int i, int j, int n, int m, vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& dp)
    {
        if(i == n or j == m)
            return 0;
        
        if(dp[i][j] != -1)
            return dp[i][j];
                
        int res = INT_MIN;
        
        int take = nums1[i] * nums2[j] +  helper(i+1, j+1, n, m, nums1, nums2, dp);
        
        int moveI = helper(i+1, j, n, m, nums1, nums2, dp);
        
        int moveJ = helper(i, j+1, n, m, nums1, nums2, dp);
        
        return dp[i][j] = max({take, moveI, moveJ});
        
    }
    
    int getMaxPair(vector<int>& nums1, vector<int>& nums2)
    {
        int ans = INT_MIN;
        
        for(auto& fir : nums1)
        {
            for(auto& sec : nums2)
            {
                ans = max(ans, fir*sec);
            }
        }
        
        return ans;
    }
    
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
      
        int ans = helper(0, 0, n, m, nums1, nums2, dp);
        
        int maxPairValue = getMaxPair(nums1, nums2);
        
        if(ans == 0)
            return maxPairValue;
        
        return ans;

    }
};