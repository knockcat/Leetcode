class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        int n = points.size();
       
        int ans = 1;
        
        for(int i = 0; i<n-1; ++i)
        {
            unordered_map<double,int> mp;
            for(int j = i + 1; j<n; ++j)
            {
                double slope = (double)(points[j][1] - points[i][1]) / (double)(points[j][0] - points[i][0]);
                
                if(points[j][1]  - points[i][1] < 0 && (points[j][0] - points[i][0]) == 0 )
                    ++mp[abs(slope)];
                else
                    ++mp[slope];
            }
            for(auto itr : mp)
                ans = max(ans,itr.second + 1);
        }
        
        return ans;
        
    }
};