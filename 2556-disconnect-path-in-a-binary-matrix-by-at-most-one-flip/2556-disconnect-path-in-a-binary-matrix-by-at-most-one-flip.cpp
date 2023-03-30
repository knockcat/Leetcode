class Solution {
public:
    
    vector<int> dx = {1,0};
    vector<int> dy = {0,1};
    
    bool dfs(int i, int j, int n, int m, vector<vector<int>>& grid)
    {
        if(i == n-1 and j == m-1)
            return true;
        
        grid[i][j] = 0;
        
        for(int k = 0; k < 2; ++k)
        {
            int newx = i + dx[k];
            int newy = j + dy[k];
            
            if(newx >= 0 and newy >= 0 and newx < n and newy < m and grid[newx][newy] == 1)
            {
                if(dfs(newx,newy, n,m,grid))
                    return true;
            }
        }
        return false;
    }
    
    bool isPossibleToCutPath(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        if(dfs(0,0,n,m,grid) == false)
            return true;
        
        if(dfs(0,0,n,m,grid) == false)
            return true;
        
        return false;
    }
};