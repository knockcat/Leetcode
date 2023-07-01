class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        int cnt = 0;
        
        for(int i = 1; i < n; ++i)
        {
            if(nums[i] == nums[i-1])
            {
                ++cnt;
            }
            else
                nums[i-cnt] = nums[i];
        }
        
        return n - cnt;
        
    }
};