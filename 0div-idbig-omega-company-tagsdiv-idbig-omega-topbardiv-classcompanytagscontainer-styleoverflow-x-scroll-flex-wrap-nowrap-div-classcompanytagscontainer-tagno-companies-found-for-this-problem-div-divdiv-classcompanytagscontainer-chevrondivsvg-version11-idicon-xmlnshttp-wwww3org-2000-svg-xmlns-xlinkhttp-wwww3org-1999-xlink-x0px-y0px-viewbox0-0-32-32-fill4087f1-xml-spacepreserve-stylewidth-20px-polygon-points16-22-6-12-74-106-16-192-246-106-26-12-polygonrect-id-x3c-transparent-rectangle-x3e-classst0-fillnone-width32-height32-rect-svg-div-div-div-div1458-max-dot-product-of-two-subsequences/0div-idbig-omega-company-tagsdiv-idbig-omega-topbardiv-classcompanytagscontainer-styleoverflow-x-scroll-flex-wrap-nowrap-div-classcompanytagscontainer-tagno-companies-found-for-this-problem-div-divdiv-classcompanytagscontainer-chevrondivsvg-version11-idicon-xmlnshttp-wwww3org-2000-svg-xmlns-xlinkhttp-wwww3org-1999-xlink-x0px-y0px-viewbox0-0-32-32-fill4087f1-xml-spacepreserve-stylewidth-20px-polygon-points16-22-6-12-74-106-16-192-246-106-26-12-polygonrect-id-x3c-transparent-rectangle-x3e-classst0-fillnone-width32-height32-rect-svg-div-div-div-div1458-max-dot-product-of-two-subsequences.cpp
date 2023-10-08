class Solution {
public:
    
    int helper(int i, int j, int n, int m, vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& dp)
    {
        if(i == n or j == m)
            return -1e9;
        
        if(dp[i][j] != -1)
            return dp[i][j];
                
        int res = INT_MIN;
        
        int take = max(nums1[i] * nums2[j], nums1[i] * nums2[j] +  helper(i+1, j+1, n, m, nums1, nums2, dp));
        
        int notTake = max(helper(i+1, j, n, m, nums1, nums2, dp), helper(i, j+1, n, m, nums1, nums2, dp));
        
        return dp[i][j] = max(take, notTake);
        
    }
    
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
      
        return helper(0, 0, n, m, nums1, nums2, dp);

    }
};