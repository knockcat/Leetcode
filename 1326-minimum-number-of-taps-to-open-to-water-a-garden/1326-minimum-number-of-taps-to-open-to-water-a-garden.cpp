class Solution {

private:
    int helper(int idx, int maxEnd, int n, vector<pair<int,int> >& startEnd, map<pair<int, int>,int>& dp)
    {
        if(idx == startEnd.size())
            return (maxEnd >= n ? 0 : 1e9);
        
        if(dp.find({idx, maxEnd}) != dp.end())
            return dp[{idx, maxEnd}];
        
        if(maxEnd < startEnd[idx].first)
            return 1e9;
        
        int notTake = helper(idx+1, maxEnd, n, startEnd, dp);
       
        int take = 1 + helper(idx+1, max(maxEnd,startEnd[idx].second), n, startEnd , dp);

        return dp[{idx, maxEnd}] = min(take, notTake);
    }
    
public:
    int minTaps(int n, vector<int>& ranges) {
        
        vector<pair<int,int> > startEnd;
        
        for(int i = 0; i < ranges.size(); ++i)
        {
            int start = max(0, i - ranges[i]);
            int end = min(n, i + ranges[i]);
            
            startEnd.push_back({start, end});
        }
        
        sort(startEnd.begin(), startEnd.end());
        
        map<pair<int,int>,int> dp;
        
        int ans = helper(0, 0, n, startEnd, dp);
        
        return (ans == 1e9 ? -1 : ans);
        
    }
};