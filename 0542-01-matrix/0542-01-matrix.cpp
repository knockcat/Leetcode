class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();
        
        queue<pair<int, pair<int,int>>> q;
        
        vector<vector<int>> dist(n, vector<int>(m));
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(mat[i][j] == 0)
                {
                    dist[i][j] = 0;
                    q.push({0,{i,j}});
                    visited[i][j] = true;
                }
            }
        }
        
        vector<int> dx = {-1, 0, 0, +1};
        vector<int> dy = {0, -1, +1, 0};
        
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            int curDist = curr.first;
            int x = curr.second.first;
            int y = curr.second.second;
            
            if(mat[x][y] == 1)
            {
                dist[x][y] = curDist;
            }
            
            for(int i = 0; i < 4; ++i)
            {
                int newX = dx[i] + x;
                int newY = dy[i] + y;
                
                if(newX >= 0 and newY >= 0 and newX < n and newY < m and !visited[newX][newY])
                {
                    q.push({curDist + 1,  {newX, newY}});
                    visited[newX][newY] = true;
                }
            }
        }
        
        return dist;
    }
};