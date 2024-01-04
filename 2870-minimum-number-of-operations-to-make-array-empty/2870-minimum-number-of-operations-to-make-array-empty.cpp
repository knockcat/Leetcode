class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        map<int, int> mp;
        
        for(auto& itr : nums)
            ++mp[itr];
        
        int ans = 0;
        
        for(auto&[_, e] : mp)
        {
            if(e == 1)
                return -1;
            
            if(e % 3 == 0)
                ans += e/3;
            else{
                ans += e/3;
                ++ans;
            }
        }
        
        return ans;
    }
};