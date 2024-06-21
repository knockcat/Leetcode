class Solution {
public:

    int helper(int idx, bool flag, int n, int minutes, vector<int>& grumpy, vector<int>& customers, vector<int>& pref, vector<vector<int>>& dp)
    {
        if(idx >= n)
            return 0;
        
        if(dp[idx][flag] != -1)
            return dp[idx][flag];
        
        int ans = (grumpy[idx] == 0 ? customers[idx] : 0) + helper(idx+1, flag, n, minutes, grumpy, customers, pref, dp);
        
        int secretMove = 0;
        
        if(!flag)
        {
            secretMove = (idx + minutes - 1 < n ? (pref[idx+minutes-1] - (idx-1 >= 0 ? pref[idx-1] : 0)) : pref[n-1] - (idx-1 >= 0 ? pref[idx-1] : 0)) + helper(idx + minutes, 1, n, minutes, grumpy, customers, pref, dp);
            
            ans = max(ans, secretMove);
        }
        
        return dp[idx][flag] = ans;
    }
    
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        
        int n = customers.size();
        
        vector<vector<int>> dp(n, vector<int>(2, -1));
        
        vector<int> pref(n, 0);
        
        pref[0] = customers[0];
        
        for(int i = 1; i < n; ++i)
        {
            pref[i] = pref[i-1] + customers[i];
        }
        
        return helper(0, 0, n, minutes, grumpy, customers, pref, dp);
        
    }
};