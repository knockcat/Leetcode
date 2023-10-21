class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        vector<int> dp(n+1);
        
        for(int i = 0; i < n; ++i)
            dp[i] = nums[i];
        
        priority_queue<pair<int,int>> pq;
        
        int ans = *max_element(begin(nums), end(nums));
        
        pq.push({nums[0], 0});
        
        for(int i = 1; i < n; ++i)
        {
            while(!pq.empty() and i - pq.top().second > k)
                pq.pop();
            
            dp[i] = max(dp[i], nums[i] + pq.top().first);
            
            ans = max(ans, dp[i]);
            
            pq.push({dp[i], i});
        }
        
        return ans;
    }
};

 