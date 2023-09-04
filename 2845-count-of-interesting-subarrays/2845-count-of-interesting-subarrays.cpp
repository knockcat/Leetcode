class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        
        unordered_map<int, int> mp;
        
        mp.insert({0, 1});
        
        long long prefix = 0, counter = 0;
        
        for(auto& itr :  nums)
        {
            prefix = (prefix + (itr % modulo == k ? 1 : 0))%modulo;
            
            int need = (((prefix - k)% modulo) + modulo) % modulo;
            
            if(mp.find(need) != mp.end())
                counter += mp[need];
            
            ++mp[prefix];
        }
        
        return counter;
    }
};