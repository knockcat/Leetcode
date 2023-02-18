class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        vector<vector<int>> dist(n,vector<int>(m,0));
        
        queue<pair<pair<int,int>, int> > q;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(mat[i][j] == 0)
                {
                    q.push({{i,j}, 0});
                    visited[i][j] = true;
                }
            }
        }
        
        while(!q.empty())
        {
            int currRow = q.front().first.first;
            int currCol = q.front().first.second;
            int steps = q.front().second;
            
            q.pop();
            
            dist[currRow][currCol] = steps;
            
            vector<int> rows = {-1, 0, 0, +1};
            vector<int> cols = {0, -1, +1, 0};
            
            for(int i = 0; i < 4; ++i)
            {
                int newRow = currRow + rows[i];
                int newCol = currCol + cols[i];
                
                if(newRow >= 0 and newRow < n and newCol >= 0 and newCol < m and !visited[newRow][newCol])
                {
                    q.push({{newRow,newCol}, steps + 1});
                    visited[newRow][newCol] = true;
                }
            }
        }
        
        return dist;
    }
};