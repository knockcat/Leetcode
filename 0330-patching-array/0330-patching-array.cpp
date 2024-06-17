class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        
        long long maxReach = 0;
        int patch = 0, i = 0;
        
        while(maxReach < n)
        {
            if(i < nums.size() and nums[i] <= maxReach + 1)
            {
                maxReach += nums[i];
                ++i;
            }
            else
            {
                ++patch;
                maxReach += (maxReach + 1);
            }
        }
        
        return patch;
        
    }
};