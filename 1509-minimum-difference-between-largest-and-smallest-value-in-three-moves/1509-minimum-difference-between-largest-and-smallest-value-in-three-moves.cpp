class Solution {
public:
    int minDifference(vector<int>& nums) {
    
        int n = nums.size();
        
        if(n <= 3)
            return 0;
        
        auto calc = [&](int i, int j)
        {
            return nums[j] - nums[i];
        };
        
        sort(nums.begin(), nums.end());
        
        return min({calc(3, n-1), calc(0, n-4), calc(1, n-3), calc(2, n-2)});
        
    }
};