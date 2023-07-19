class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int n =   intervals.size();
        
        sort(intervals.begin(), intervals.end(),[&](const auto &a, const auto & b){
            return a[1] < b[1];
        });
        
        int cnt = 1;
        
        int prev = intervals[0][1];
        
        for(int i = 1; i < n; ++i)
        {
            if(intervals[i][0] >= prev)
            {
                ++cnt;
                prev = intervals[i][1];
            }
        }
        
        return n - cnt;
        
        
    }
};