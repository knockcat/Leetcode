class Solution {
public:
    
    vector<int> dx = {-1, +1, 0, 0};
    vector<int> dy = {0, 0, +1, -1};
    
    bool isValid(int x, int y, int n, int m)
    {
        return (x >= 0 and y >= 0 and x < n and y < m);
    }
    
    int dfs(int i, int j, int n, int m, vector<vector<int>>& grid, vector<vector<bool>>& visited){
        
        int maxAns = 0;
        
        visited[i][j] = true;
        
        for(int k = 0; k < 4; ++k)
        {
            int newx = dx[k] + i;
            int newy = dy[k] + j;
            
            if(isValid(newx, newy, n, m) and grid[newx][newy] != 0 and !visited[newx][newy])
            {
                int ans = grid[newx][newy] + dfs(newx, newy, n, m, grid, visited);
                maxAns = max(maxAns, ans);
            }
        }
        
        visited[i][j] = false;
        
        return maxAns;
    }   
    
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        int ans = 0;
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] != 0)
                {
                    int currVal = grid[i][j] + dfs(i, j, n, m, grid, visited);
                    ans = max(ans, currVal);
                }
            }
        }
        
        return ans;
    }
};