class Solution {
public:
    
    const int mod = 1e9+7;
    
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        int n = arr.size();
        
        unordered_map<long long, long long> mp;
        
        for(auto& itr : arr)
                ++mp[itr];
        
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        
        for(int i = 1; i < n; ++i)
        {
            for(int j = 0; j < i; ++j)
            {
                if(arr[i] % arr[j] == 0)
                {
                    long long count = (mp[arr[j]] * 1LL * mp[arr[i]/arr[j]]) % mod;
                    mp[arr[i]] = (mp[arr[i]] % mod + count)% mod;
                }
            }
        }
        
        for(auto& itr : mp)
        {
            ans = (ans + itr.second) % mod;
        }
        
        return ans;
        
    }
};