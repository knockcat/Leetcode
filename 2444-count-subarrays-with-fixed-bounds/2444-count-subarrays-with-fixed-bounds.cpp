class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        int n = nums.size();
        long long res = 0;
        
        long long maxiIdx = -1, miniIdx = -1, badIdx = -1;
        for(int i = 0; i<n; ++i)
        {
            if(nums[i] > maxK or nums[i] < minK)
                badIdx = i;
           if(nums[i] == maxK)  maxiIdx = i;
           if(nums[i] == minK)  miniIdx = i;
           res += max(0LL, (min(maxiIdx,miniIdx) - badIdx));
        }
        
        return res;
       
    }
};