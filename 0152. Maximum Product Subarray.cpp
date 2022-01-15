152. Maximum Product Subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxs = nums[0];
        int max_end = nums[0];
        int min_end = nums[0];
        
        for(int i = 1; i<nums.size(); i++)
        {
            int temp = max_end;
            max_end = max({nums[i] , nums[i]*max_end , nums[i]*min_end});
            min_end = min({nums[i] , nums[i]*temp , nums[i]*min_end});
            maxs = max(maxs, max_end);
        }
        return maxs;
    }
};