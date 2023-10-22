class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int i = k, j = k;
        
        int ans = nums[k], currMin = nums[k];
        
        while(i > 0 or j < n-1)
        {
            int left = (i > 0 ? nums[i-1] : 0);
            int right = (j < n-1 ? nums[j+1] : 0);
            
            if(left > right)
            {
                --i;
                currMin = min(currMin, nums[i]);
            }
            else
            {
                ++j;
                currMin = min(currMin,nums[j]);
            }
            
            ans = max(ans, currMin * (j-i+1));
        }
        
        return ans;
    }
};