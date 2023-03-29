class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
       
        queue<pair<int,int>> q;
        
        vector<int> dx = {1,0,0,-1};
        vector<int> dy = {0,-1,+1,0};
        
        vector<vector<int>> dp(n, vector<int>(m,INT_MAX));
        
        q.push({0,0});
        dp[0][0] = 0;
        
        while(!q.empty())
        {         
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i = 0; i<4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];

                if(newx >= 0 and newy >= 0 and newx < n and newy < m and dp[x][y] + grid[newx][newy] < dp[newx][newy])
                {
                    dp[newx][newy] = dp[x][y] + grid[newx][newy];
                    q.push({newx,newy});
                }
            }
        }
        
        return dp[n-1][m-1];
    }
};