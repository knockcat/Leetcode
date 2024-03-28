class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int i = 0, j = 0, n = nums.size();
        
        int maxFreq = 0, ans = 0;
        
        map<int,int> mp;
        
        while(j < n)
        {
            ++mp[nums[j]];
            maxFreq = max(maxFreq, mp[nums[j]]);
            
            while(mp[nums[j]] > k)
            {
                --mp[nums[i]];
                if(mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                ++i;
            }
            
            ans = max(ans, j-i+1);
            ++j;
        }
        
        return ans;
    }
};