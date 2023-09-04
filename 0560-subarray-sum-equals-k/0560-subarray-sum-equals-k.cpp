class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        int sum = 0, counter = 0;
        
        mp.insert({0, 1});
        
        for(auto& itr : nums)
        {
            sum += itr;
            
            if(mp.find(sum - k) != mp.end())
                counter += mp[sum - k];
            
            ++mp[sum];
        }
        
        return counter;
    }
};