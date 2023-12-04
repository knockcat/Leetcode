class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        
        int t = 0;
        
        for(int i = 1; i < n; ++i)
        {
            t += max(abs(points[i][1] - points[i-1][1]), abs(points[i][0] - points[i-1][0]));
        }
        
        return t;
        
    }
};