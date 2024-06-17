using ll = long long;

class Solution {
public:
    
    long long maximumTotalDamage(vector<int>& power) {
        
        map<int,int> mp;
        
        for(auto& ele : power)
            ++mp[ele];
        
        vector<int> vec;
        
        for(auto& [f, _] : mp)
            vec.push_back(f);
        
        vector<ll> dp(vec.size()+1, 0);
        
        for(int i = vec.size()-1; i >= 0; --i)
        {
            ll notTake = dp[i+1];
            
            int ubIdx = upper_bound(vec.begin(), vec.end(), vec[i] + 2) - vec.begin();
        
            ll take = vec[i] * 1LL * mp[vec[i]] + dp[ubIdx];
            
            dp[i] = max(take, notTake);
        }
        
        return dp[0];
        
    }
};