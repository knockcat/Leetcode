class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        int n = points.size();
        
        int ans = 0;
        
        sort(points.begin(), points.end());
        
        vector<int> v;
        
        for(int i = 0; i < n; ++i)
        {
            v.push_back(points[i][0]);
        }
        
        
        for(int i = 0; i < n; ++i)
        {
            int x1 = v[i];
            int idx = upper_bound(v.begin(), v.end(), v[i]) - v.begin();
            
            if(idx == n)
                continue;
            
            int x2 = v[idx];
            
            // cout<<x1<<' '<<x2<<endl;
            
            ans = max(ans, x2 - x1);
        }
        
        return ans;
    }
};