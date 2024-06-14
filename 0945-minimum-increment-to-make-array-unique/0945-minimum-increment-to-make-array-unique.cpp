class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
     
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int curr = nums[0], ans = 0;
        
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] <= curr)
            {
                int val = abs(nums[i] - curr) + 1;
                ans += val;
                nums[i] += val;
            }
            curr = nums[i];
        }
        
        return ans;
        
    }
};