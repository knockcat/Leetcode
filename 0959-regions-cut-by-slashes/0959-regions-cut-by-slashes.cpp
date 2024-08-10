class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        
        vector<vector<int>> mat(n*3, vector<int>(m*3, 0));
        vector<vector<int>> visited = mat;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == '/')
                {
                    mat[i*3][j*3+2] = 1;
                    mat[i*3+1][j*3+1] = 1;
                    mat[i*3+2][j*3] = 1;
                }
                else if(grid[i][j] == '\\')
                {
                    mat[i*3][j*3] = 1;
                    mat[i*3+1][j*3+1] = 1;
                    mat[i*3+2][j*3+2] = 1;
                }
            }
        }
        
        function<void(int,int)> dfs = [&](int i, int j)
        {
            if(i < 0 or j < 0 or i >= n*3 or j >= m*3 or visited[i][j] or mat[i][j] == 1)
                return;
            visited[i][j] = 1;
            dfs(i-1, j);
            dfs(i, j+1);
            dfs(i+1, j);
            dfs(i, j-1);
        };
        
        for(int i = 0; i < n*3; ++i)
        {
            for(int j = 0; j < m*3; ++j)
            {
                if(!visited[i][j] and mat[i][j] == 0)
                {
                    ++cnt;
                    dfs(i, j);
                }
            }
        }
        
        return cnt;
    }
};