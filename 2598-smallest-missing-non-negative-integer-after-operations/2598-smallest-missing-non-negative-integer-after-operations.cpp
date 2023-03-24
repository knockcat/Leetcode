class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        
        int n = nums.size();
        
        map<int,int> mp;
        
        for(auto itr :  nums)
        {
            int val = itr%value;
            if(val < 0)
                ++mp[val + value];
            else
                ++mp[val];
        }
        
        for(int i = 0; i<=n; ++i)
        {
            if(mp[i % value] > 0)
               {
                   --mp[i%value];
                   continue;
               }
            else
                return i;
        }
        return n;
    }
};