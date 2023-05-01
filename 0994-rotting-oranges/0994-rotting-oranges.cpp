class Solution {
public:
    
    bool isValid (int x, int y, vector<vector<int>>& grid, vector<vector<bool>>& visited)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        return(x >= 0 and y >= 0 and x < n and y < m and !visited[x][y] and grid[x][y] == 1);
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<pair<int,int>, int>> q;
        
        vector<vector<bool>> visited(n,vector<bool>(m, false));
        
        vector<int> dx = {-1, 0, 0, +1};
        vector<int> dy = {0, -1, +1, 0};
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                    visited[i][j] = true;
                }
            }
        }
        
        int step = 0, ans = 0;
        
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            int x = curr.first.first;
            int y = curr.first.second;
            step = curr.second;
            
            ans = max(ans, step);
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = dx[i] + x;
                int newy = dy[i] + y;
                
                if(isValid(newx, newy, grid, visited))
                {
                    visited[newx][newy] = true;
                    q.push({{newx,newy},step+1});
                    grid[newx][newy] = 2;
                }
            }
        
        }
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
               if(grid[i][j] == 1)
                   return -1;
            }
        }
        
        return ans;
        
    }
};