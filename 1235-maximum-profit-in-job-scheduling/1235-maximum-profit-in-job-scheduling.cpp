class Solution {
public:
    
    int getNextIdx(int low, int last, vector<vector<int>>& jobs)
    {
        int n = jobs.size();
        int high = n-1, result = n;
        
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            
            if(jobs[mid][0] >= last)
            {
                result = mid;
                high = mid-1;
            }
            else
                low = mid+1;
        }
        
        return result;
    }
    
    int helper(int idx, int n,  vector<vector<int>>& jobs, vector<int>& dp)
    {
        if(idx == n)
            return 0;
        
        if(dp[idx] != -1)
            return dp[idx];
        
        int next = getNextIdx(idx+1, jobs[idx][1], jobs);
        
        int notTake = helper(idx+1, n, jobs, dp);
        
        int take = jobs[idx][2] + helper(next, n, jobs, dp);
        
        return dp[idx] = max(take, notTake);
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        
        int n = startTime.size();
        
        vector<vector<int>> jobs;
        
        for(int i = 0; i < n; ++i)
        {
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }
        
        sort(jobs.begin(), jobs.end());
        
        vector<int> dp(n+1, -1);
        
        return helper(0, n, jobs, dp);

    }
};