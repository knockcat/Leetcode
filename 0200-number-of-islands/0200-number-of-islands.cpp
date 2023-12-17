class Solution {
public:
    
    vector<int> dy = {-1, +1, 0, 0};
    vector<int> dx = {0, 0, -1, +1};
    
    bool isValid(int i, int j, int n, int m)
    {
        return (i >= 0 and j >= 0 and i < n and j < m);
    }
    
    void dfs(int i, int j, int n, int m, vector<vector<char>>& grid, vector<vector<bool>>& visited)
    {
        visited[i][j] = true;
        
        for(int k = 0; k < 4; ++k)
        {
            int newx = dx[k] + i;
            int newy = dy[k] + j;
            
            if(isValid(newx, newy, n, m) and !visited[newx][newy] and grid[newx][newy] == '1')
            {
                dfs(newx, newy, n, m, grid, visited);   
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int numberOfIslands = 0;
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == '1' and !visited[i][j])
                {
                    ++numberOfIslands;
                    dfs(i, j, n, m, grid, visited);
                }
            }
        }
        
        return numberOfIslands;
        
    }
};