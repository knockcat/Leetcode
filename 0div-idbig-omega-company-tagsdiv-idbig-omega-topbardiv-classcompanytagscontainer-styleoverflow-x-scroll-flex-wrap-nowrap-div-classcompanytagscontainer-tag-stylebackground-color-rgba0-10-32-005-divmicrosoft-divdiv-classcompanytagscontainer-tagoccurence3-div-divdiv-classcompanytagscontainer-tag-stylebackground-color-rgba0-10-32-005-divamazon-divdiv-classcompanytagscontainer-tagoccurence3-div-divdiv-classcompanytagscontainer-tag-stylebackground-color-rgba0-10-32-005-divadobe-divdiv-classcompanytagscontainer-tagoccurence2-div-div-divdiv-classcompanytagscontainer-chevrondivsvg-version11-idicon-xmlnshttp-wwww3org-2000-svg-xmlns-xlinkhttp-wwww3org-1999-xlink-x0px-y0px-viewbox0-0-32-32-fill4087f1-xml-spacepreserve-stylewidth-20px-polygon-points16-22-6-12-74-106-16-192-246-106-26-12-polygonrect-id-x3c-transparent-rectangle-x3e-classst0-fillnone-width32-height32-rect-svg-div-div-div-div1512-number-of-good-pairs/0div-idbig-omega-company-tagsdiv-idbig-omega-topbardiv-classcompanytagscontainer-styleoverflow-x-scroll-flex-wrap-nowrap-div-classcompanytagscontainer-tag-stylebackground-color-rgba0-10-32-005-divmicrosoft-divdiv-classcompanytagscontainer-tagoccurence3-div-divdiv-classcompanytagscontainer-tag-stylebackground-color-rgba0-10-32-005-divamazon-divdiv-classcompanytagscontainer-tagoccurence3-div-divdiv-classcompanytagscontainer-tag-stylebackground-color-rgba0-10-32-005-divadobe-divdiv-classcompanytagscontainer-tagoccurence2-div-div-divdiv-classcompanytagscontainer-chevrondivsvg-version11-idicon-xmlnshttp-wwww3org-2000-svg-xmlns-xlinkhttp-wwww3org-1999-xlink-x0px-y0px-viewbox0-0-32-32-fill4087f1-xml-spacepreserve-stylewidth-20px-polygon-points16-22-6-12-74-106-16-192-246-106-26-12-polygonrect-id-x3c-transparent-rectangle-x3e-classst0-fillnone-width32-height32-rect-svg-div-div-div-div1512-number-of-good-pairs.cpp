class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        for(auto& itr : nums)
            ++mp[itr];
        
        int count = 0;
        
        for(auto& [key, value] : mp)
        {
            count += (value * (value-1))/2;
        }
        
        return count;
    }
};