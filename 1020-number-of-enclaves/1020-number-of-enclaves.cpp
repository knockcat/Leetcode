class Solution {
public:
    
    int dfs(int i, int j, int n, int m, vector<vector<int>>& grid)
    {
        if(i < 0 or j < 0 or i >= n or j >= m or grid[i][j] == 0)
            return 0;
        
        grid[i][j] = 0;
        
        return 1 + dfs(i-1,j,n,m,grid) + dfs(i+1,j,n,m,grid) + dfs(i,j-1,n,m,grid) + dfs(i,j+1,n,m,grid);
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size() ,allOne = 0, closeOne = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1)
                    ++allOne;
            }
        }
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if((i == 0 or j == 0 or i == n-1 or j== m-1) and grid[i][j] == 1)
                    closeOne += dfs(i,j,n,m,grid);
            }
        }
        
        return allOne - closeOne;
    }
};