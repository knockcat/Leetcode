class Solution {

private:
    void helper(int idx, int n, int cur, vector<vector<int>>& requests, vector<int>& dp, int& ans)
    {
        if(idx == n)
        {
            for(auto itr : dp)
            {
                if(itr != 0)
                    return;
            }
            
            ans = max(ans, cur);
            return;
        }
        
        helper(idx+1, n, cur, requests, dp , ans);
        
        --dp[requests[idx][0]];
        ++dp[requests[idx][1]];
        
        helper(idx+1, n ,cur+1, requests, dp, ans);
        
        ++dp[requests[idx][0]];
        --dp[requests[idx][1]];
    }
    
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        
        int ans = 0, sz = requests.size();
        
        vector<int> dp(n, 0);
        
        helper(0, sz, 0, requests,dp, ans);
        
        return ans;
        
    }
};