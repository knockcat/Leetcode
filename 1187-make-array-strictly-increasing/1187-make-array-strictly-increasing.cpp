#define ll long long int

class Solution {

private:
    ll helper(int idx, int prev, int n, vector<int>& arr1, vector<int>& arr2, map<pair<int,int>,int>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp.find({idx, prev}) != dp.end())
            return dp[{idx, prev}];
        
        ll ans = INT_MAX;
        
        ll ind = upper_bound(arr2.begin(), arr2.end(), prev) - arr2.begin();
        
        if(arr1[idx] > prev)
        {
            ans = min(ans, helper(idx+1, arr1[idx], n, arr1, arr2, dp));
        }
        
        if(ind < arr2.size())
        {
            ans = min(ans, 1 + helper(idx+1, arr2[ind], n, arr1, arr2, dp));
        }
        
        
        return dp[{idx, prev}] = ans;
    }
    
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        
        sort(arr2.begin(), arr2.end());
        
        map<pair<int,int>, int> dp;
        
        int n = arr1.size();
        
        int ans = helper(0, INT_MIN,n, arr1, arr2, dp);
        
        return (ans == INT_MAX ? -1 : ans);
        
    }
};