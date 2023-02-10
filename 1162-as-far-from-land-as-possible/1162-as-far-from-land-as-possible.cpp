class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        vector<vector<int>> dir ={{0,1},{-1,0},{1,0}, {0,-1}};
        queue<pair<int,int>> q;
        int ans = -1;
        
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == 1)
                {
                    visited[i][j] = true;
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty())
        {
            int size = q.size();
            
            for(int i = 0 ; i<size; ++i)
            {
                pair<int,int> here  = q.front();
                q.pop();
                
                int currx = here.first;
                int curry = here.second;

                for(auto itr : dir)
                {
                    int newx = currx + itr[0];
                    int newy = curry + itr[1];
                    
                    
                    if(newx < 0 or newx >= n or newy < 0 or newy >= m or visited[newx][newy])
                        continue;
                
                    
                    visited[newx][newy] = true;
                    
                    grid[newx][newy] = grid[currx][curry] + 1;
                    
                    ans = max(ans,grid[newx][newy]);
                    
                    q.push({newx,newy});
                }
            }
        }
        
        return (ans == -1 ? -1 : ans - 1);
    }
};