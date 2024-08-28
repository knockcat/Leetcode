class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int n = grid1.size();
        int m = grid1[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false)), visited2(n, vector<bool>(m, false));
        
        function<void(int, int)> dfs = [&](int i, int j)
        {
            if(i < 0 or j < 0 or i >= n or j >= m or visited[i][j] or !grid1[i][j])
                return;
            
            visited[i][j] = 1;
            
            dfs(i-1, j);
            dfs(i, j+1);
            dfs(i+1, j);
            dfs(i, j-1);
        };
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(!visited[i][j] and grid1[i][j])
                    dfs(i, j);
            }
        }
        
        function<bool(int, int)> dfs2 = [&](int i, int j) -> bool{
            if(i < 0 or j < 0 or i >= n or j >= m or visited2[i][j] or !grid2[i][j])
                return true;
            
            if(!visited[i][j]) return false;
            
            visited2[i][j] = true;
            
            bool up, left, right, down;
            up = left = right = down = true;
            
            up = dfs2(i-1, j);
            left = dfs2(i, j-1);
            down = dfs2(i+1, j);
            right = dfs2(i, j+1);
            
            return up and left and down and right;
        };
        
        int subIsland = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(!visited2[i][j] and grid2[i][j])
                {
                    if(dfs2(i, j))
                    {
                        ++subIsland;
                    }
                }
            }
        }
        
        return subIsland;
    }
};