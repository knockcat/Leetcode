class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
     
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m, false));
        
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i][0] and grid[i][0] == 1)
            {
                q.push({i,0});
                visited[i][0] = true;
            }
            if(!visited[i][m-1] and grid[i][m-1] == 1)
            {
                q.push({i,m-1});
                visited[i][m-1] = true;
            }
        }
        
        for(int j = 0; j < m; ++j)
        {
            if(!visited[0][j] and grid[0][j] == 1)
            {
                q.push({0,j});
                visited[0][j] = true;
            }
            if(!visited[n-1][j] and grid[n-1][j] == 1)
            {
                q.push({n-1,j});
                visited[n-1][j] = true;
            }
        }
        
        vector<int> dx = {-1, 0, 0, 1};
        vector<int> dy = {0, -1, +1, 0};
        
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            
            q.pop();
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = dx[i] + x;
                int newy = dy[i] + y;
                
                if(newx >= 0 and newy >= 0 and newx < n and newy < m and !visited[newx][newy] and grid[newx][newy] == 1)
                {
                    visited[newx][newy] = true;
                    q.push({newx, newy});
                }
            }
        }
        
        int cnt = 0;
        
        for(int i =0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(!visited[i][j] and grid[i][j] == 1)
                    ++cnt;
            }
        }
        
        return cnt;
        
    }
};