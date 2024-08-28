class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int n = grid1.size();
        int m = grid1[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        function<bool(int, int)> dfs = [&](int i, int j) -> bool{
            if(i < 0 or j < 0 or i >= n or j >= m or visited[i][j] or !grid2[i][j])
                return true;
            
            if(!grid1[i][j]) return false;
            
            visited[i][j] = true;
            
            bool up, left, right, down;
            up = left = right = down = true;
            
            up = dfs(i-1, j);
            left = dfs(i, j-1);
            down = dfs(i+1, j);
            right = dfs(i, j+1);
            
            return up and left and down and right;
        };
        
        int subIsland = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(!visited[i][j] and grid2[i][j])
                {
                    if(dfs(i, j))
                    {
                        ++subIsland;
                    }
                }
            }
        }
        
        return subIsland;
    }
};