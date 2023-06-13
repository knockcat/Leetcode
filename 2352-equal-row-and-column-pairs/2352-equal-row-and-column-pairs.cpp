class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        map<vector<int>, int> mp;
        
        vector<vector<int>> mat = grid;
        
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(i < j)
                    swap(grid[i][j], grid[j][i]);
            }
            ++mp[grid[i]];
        }
        
        for(int i = 0; i < n; ++i)
        {
            if(mp[mat[i]] > 0)
                ans += mp[mat[i]];
        }
        
        return ans;
    }
};