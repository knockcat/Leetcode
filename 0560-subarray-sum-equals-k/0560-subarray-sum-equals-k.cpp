class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int sum = 0;
        int count = 0;
        
        unordered_map<int,int> mp;
        mp.insert({0,1});
        
        for(int i = 0; i < n; ++i)
        {
            sum += nums[i];
            
            if(mp.find(sum - k) != mp.end())
                count += mp[sum - k];
            if(mp.find(sum) != mp.end())
                ++mp[sum];
            else
                mp[sum] = 1;
        }
        
        return count;
    }
};