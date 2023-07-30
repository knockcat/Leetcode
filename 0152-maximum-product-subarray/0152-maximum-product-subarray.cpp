class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        int max_end = nums[0];
        int min_end = nums[0];
        int overall_max = nums[0];
        
        for(int i = 1; i < n; ++i)
        {
            int temp = max_end;
            
            max_end = max({nums[i], max_end * nums[i], min_end * nums[i]});
            min_end = min({nums[i], temp * nums[i], min_end * nums[i]});
            
            overall_max = max({overall_max, max_end, min_end});
        }
        
        return overall_max;
        
    }
};