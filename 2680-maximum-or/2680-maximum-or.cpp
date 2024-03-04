
using ll = long long;
class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<int> pref(n, 0), suff(n, 0);
        
        pref[0] = nums[0], suff[n-1] = nums[n-1];
        
        for(int i = 1; i < n; ++i)
            pref[i] = pref[i-1] | nums[i];
        
        for(int i = n-2; i >= 0; --i)
            suff[i] = suff[i+1] | nums[i];
        
        ll res = 0, mult = 1 << k;
        
        for(int i = 0; i < n; ++i)
        {
            ll left = (i == 0 ? 0 : pref[i-1]);
            ll right = (i+1 == n ? 0 : suff[i+1]);
            
            ll ans = left | (mult*nums[i]) | right;
            res = max(res, ans);
        }
        
        return res;
    }
};