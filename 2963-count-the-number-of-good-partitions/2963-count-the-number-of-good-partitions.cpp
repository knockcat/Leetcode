#define ll long long

class Solution {
public:
    
    const int mod = 1e9 + 7;
    
    ll expo(ll x, ll y, ll mod)
    {
        ll res = 1;
        
        while(y > 0)
        {
            if(y & 1)
                res = (res * x) % mod;
            x = (x * x) % mod;
            y >>= 1;
        }
        
        return res;
    }
    
    int numberOfGoodPartitions(vector<int>& nums) {
        
        int n = nums.size();
        
        int maxGotSoFar = 0;
        
        unordered_map<int,int> mp;
        
        for(int i = 0; i < n; ++i)
        {
            mp[nums[i]] = i;
        }
        
        int nonOverLappingPartitions = 0;
        
        for(int i = 0; i < n; ++i)
        {
            maxGotSoFar = max(maxGotSoFar, mp[nums[i]]);
            
            if(mp[nums[i]] == i and maxGotSoFar == i)
            {
                ++nonOverLappingPartitions;
            }
            
        }
        
        return expo(2, nonOverLappingPartitions - 1, mod);
        
    }
};