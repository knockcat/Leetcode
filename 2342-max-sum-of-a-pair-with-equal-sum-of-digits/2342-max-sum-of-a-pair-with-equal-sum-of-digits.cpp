#define ll long long int
class Solution {
public:
    
    ll sum (int num)
    {
        ll s = 0;
        while(num > 0)
        {
            s += (num%10);
            num /= 10;
        }
        return s;
    }
    
    int maximumSum(vector<int>& nums) {
        
        vector<pair<ll,ll>> vec;
        int n = nums.size();
        
        for(auto &n : nums)
        {
            ll s = sum(n);
            vec.push_back({s,n});
        }
        
        sort(vec.begin(),vec.end());
        
        ll ans = -1;
        for(int i = 1; i < n; ++i)
        {
            if(vec[i].first == vec[i-1].first)
            {
                ll currSum = (ll)vec[i].second + vec[i-1].second;
                ans = max(ans,currSum);
            }
        }
        
        return ans;
    }
};