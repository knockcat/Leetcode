class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int currSum = 0, maxSum = INT_MIN, currSum2 = 0, minSum = INT_MAX;
        int totSum =0 ;
        int n =  nums.size();
        
        for(int i = 0; i<n; ++i)
        {
            totSum += nums[i];
            
            // first case
            
            currSum += nums[i];
            maxSum = max(maxSum, currSum);
            if(currSum < 0)
                currSum = 0;
            
            // second case
            
            currSum2 += nums[i];
            minSum = min(minSum, currSum2);
            if(currSum2 > 0)
                currSum2 = 0;
        }
        
        return (maxSum > 0 ? max(maxSum, totSum - minSum) : maxSum); 
        
    }
};