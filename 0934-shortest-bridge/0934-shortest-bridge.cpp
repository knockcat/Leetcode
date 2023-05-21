class Solution {
    
private:
    
    vector<int> dx = {-1, 0, 0, 1};
    vector<int> dy = {0, -1, 1, 0};
    
    void dfs(int x, int y, int n, int m, vector<vector<int>>& grid, vector<vector<int>>& visited, int track)
    {
        
        visited[x][y] = track;
        
        for(int i = 0; i < 4; ++i)
        {
            int newx = dx[i] + x;
            int newy = dy[i] + y;
            
            if(newx >= 0 and newy >= 0 and newx < n and newy < m and grid[newx][newy] == 1 and !visited[newx][newy])
            {
                dfs(newx, newy, n, n, grid, visited, track);
            }
        }
    }
    
public:
    int shortestBridge(vector<vector<int>>& grid) {
     
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m, 0));
        
        int track = 1;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1 and !visited[i][j])
                {
                    ++track;
                    dfs(i, j, n, m, grid, visited, track);
                }
            }
        }
        
        queue<pair<pair<int,int>, int>> q;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(visited[i][j] == 2)
                    q.push({{i,j}, 0});
            }
        }
        
        int ans = 1e9;
        
        // for(auto itr : visited)
        // {
        //     for(auto x : itr)
        //         cout<<x<<" ";
        //     cout<<endl;
        // }
        
        while(!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            
            int step = q.front().second;
            
            q.pop();
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = dx[i] + x;
                int newy = dy[i] + y;
                
                if(newx >= 0 and newy >= 0 and newx < n and newy < m and visited[newx][newy] == 3)
                {
                    // cout<<newx<<" "<<newy<<endl;
                    ans = min(ans, step);
                }
                
                if(newx >= 0 and newy >= 0 and newx < n and newy < m and visited[newx][newy] == 0)
                {
                    visited[newx][newy] = true;
                    q.push({{newx,newy}, step + 1});
                }
            }
        }
        
        return ans;
        
    }
};