class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        vector<int> row(n, 0), col(m, 0);
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1)
                    ++row[i], ++col[j];
            }
        }
        
        vector<vector<int>> diff(n, vector<int>(m));
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
                diff[i][j] = (row[i] + col[j] - (m - row[i]) - (n - col[j]));
        }
        
        return diff;
    }
};