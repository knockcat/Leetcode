class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int n = nums.size();
        
        bool incr = true, decr = true;
        
        for(int i = 1; i < n; ++i)
        {
            incr &= (nums[i-1] <= nums[i]);
            decr &= (nums[i-1] >= nums[i]);
        }
        
        return incr or decr;
    }
};