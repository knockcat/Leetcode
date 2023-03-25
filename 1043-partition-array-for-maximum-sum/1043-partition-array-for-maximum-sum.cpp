class Solution {
public:
    
    int helper(int idx, int n, vector<int>& arr, int k, vector<int>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int maxSum = INT_MIN, maxi = INT_MIN, len = 0;
        for(int i = idx; i < min(idx + k, n); ++i)
        {
            ++len;
            maxi = max(maxi, arr[i]);
            
            int sum = len * maxi + helper(i+1, n, arr, k, dp);
            
            maxSum = max(maxSum, sum);
        }
        return dp[idx] =  maxSum;
    }
    
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        
        int n = arr.size();
        vector<int> dp(n+1,-1);
        return helper(0,n,arr,k,dp);
        
    }
};