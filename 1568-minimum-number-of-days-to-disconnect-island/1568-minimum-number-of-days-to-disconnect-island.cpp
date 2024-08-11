class Solution {
public:
    
    vector<int> dx = {-1,0,0,+1};
    vector<int> dy = {0,-1,+1,0};
    
    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& visited)
    {
        visited[i][j] = 1;
        
        for(int k = 0; k < 4; ++k)
        {
            int newx = dx[k] + i;
            int newy = dy[k] + j;
            
            if(newx >= 0 and newy >= 0 and newx < grid.size() and newy < grid[0].size() and grid[newx][newy] == 1 and !visited[newx][newy])
            {
                dfs(newx,newy, grid, visited);
            }
        }
    }
    
    int  countNumberofIslands(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1 and !visited[i][j])
                {
                    ++count;
                    dfs(i,j,grid,visited);
                }
            }
        }
        
        return count;
    }
    
    int minDays(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        int island = countNumberofIslands(grid);
    
        if(island > 1 or island == 0)
            return 0;
        
        int oneCount = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1)
                {
                    grid[i][j] = 0;
                    
                    island = countNumberofIslands(grid);
                    
                    if(island > 1)
                        return 1;
                    
                    grid[i][j] = 1;
                    
                    ++oneCount;
                }
            }
        }
        
        if(oneCount == 1)
            return 1;
        
        return 2;
        
    }
};