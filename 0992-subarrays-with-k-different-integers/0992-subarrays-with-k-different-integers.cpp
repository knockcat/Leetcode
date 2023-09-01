class Solution {
    
private:
    int subarrayWithAtmost(vector<int>& nums, int k)
    {
        int i = 0, j = 0, n = nums.size();
        
        unordered_map<int,int> mp;
        
        int ans = 0;
        
        while(j < n)
        {
            ++mp[nums[j]];
            
            while(mp.size() > k)
            {
                --mp[nums[i]];
                if(mp[nums[i]] == 0)
                    mp.erase(nums[i]);
                ++i;
            }
            
            ans += (j - i + 1);
            ++j;
        }
        
        return ans;
    }
    
public:
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return subarrayWithAtmost(nums, k) - subarrayWithAtmost(nums, k-1);
        
    }
};