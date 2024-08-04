class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        return max({nums[0] * nums[1] * nums[2], nums[0] * nums[1] * nums[n-1], nums[n-3] * nums[n-2] * nums[n-1]});
        
    }
};