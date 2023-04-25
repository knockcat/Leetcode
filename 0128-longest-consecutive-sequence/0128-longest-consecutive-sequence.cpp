class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 0)
            return 0;
        
        sort(nums.begin(),nums.end());
        
        int ans = 1, curr = 1;
        
        for(int i = 1; i<n; ++i)
        {
            if(nums[i] == nums[i-1])
                continue;
            if(nums[i] == nums[i-1] + 1)
            {
                ++curr;
                ans = max(ans,curr);
            }
            else
                curr = 1;
        }
        
        return ans;
        
    }
};