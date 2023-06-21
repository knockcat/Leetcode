#define ll long long int

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        int n = nums.size();
        
        vector<pair<int,int>> vp;
        
        for(int i = 0; i < n; ++i)
        {
            vp.push_back({nums[i], cost[i]});
        }
        
        sort(vp.begin(), vp.end());
        
        ll median, sum = 0, tot = 0;
        
        for(auto itr : vp)
        {
            sum += itr.second;
        }
        
        ll here = 0, ans = 0;
        
        ll i = 0;
        
        while(i < n and here < (sum + 1) / 2)
        {
            here += vp[i].second;
            median = vp[i++].first;
        }
        
        for(int i = 0; i < n; ++i)
        {
            ans += (abs(nums[i] - median) * cost[i]);
        }
        
        return ans;
    }
};