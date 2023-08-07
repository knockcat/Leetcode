class Solution {
public:
    int maximumSafenessFactor(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> minimumMahattanDistance(n, vector<int>(m, 0));
        
        queue<pair<int,int>> q;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1)
                {
                    q.push({i,j});
                    minimumMahattanDistance[i][j] = 0;
                }
            }
        }
        
        vector<int> dx = {-1, 0, 0, +1};
        vector<int> dy = {0, -1, +1, 0};
        
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            int x = curr.first;
            int y = curr.second;
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                
                if(newx >= 0 and newy >= 0 and newx < n and newy < m and grid[newx][newy] != 1 and minimumMahattanDistance[newx][newy] == 0)
                {
                    q.push({newx, newy});
                    minimumMahattanDistance[newx][newy] = minimumMahattanDistance[x][y] + 1;
                }
            }
        }
        
        // for(auto itr : minimumMahattanDistance)
        // {
        //     for(auto row : itr)
        //         cout<<row<<' ';
        //     cout<<endl;
        // }
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        int ans = minimumMahattanDistance[0][0];
        
        priority_queue<pair<int, pair<int,int>> >  pq;
        
        pq.push({minimumMahattanDistance[0][0],{0,0}});
        
        visited[0][0] = true;
        
        while(!pq.empty())
        {
            auto curr = pq.top();
            pq.pop();
            
            int maximumSafenessFactor = curr.first;
            int x = curr.second.first;
            int y = curr.second.second;
            
            if(x == n-1 and y == m-1)
            {
                return maximumSafenessFactor;
            }
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                
                if(newx >= 0 and newy >= 0 and newx < n and newy < m and !visited[newx][newy])
                {
                    pq.push({min(maximumSafenessFactor,minimumMahattanDistance[newx][newy]),{newx, newy}});
                    visited[newx][newy] = true;
                }
            }
        }
        
        return 0;
    }
};