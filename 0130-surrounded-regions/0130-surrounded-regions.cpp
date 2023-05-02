class Solution {
public:
    
    void dfs(int x , int y, int n, int m, vector<vector<bool>>& visited, vector<vector<char>>& board, vector<int>& dx, vector<int>& dy)
    {
        visited[x][y] = true;
        
        for(int i = 0; i < 4; ++i)
        {
            int newx = dx[i] + x;
            int newy = dy[i] + y;
            
            if(newx >= 0 and newy >= 0 and newx < n and newy < m and !visited[newx][newy] and board[newx][newy] == 'O')
                dfs(newx, newy, n, m, visited, board, dx, dy);
        }
    }
    
    
    void solve(vector<vector<char>>& board) {
     
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        vector<int> dx = {-1,0,0,+1};
        vector<int> dy = {0,-1,+1,0};
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i][0] and board[i][0] == 'O')
                dfs(i, 0, n, m, visited, board, dx, dy);
            
            if(!visited[i][m-1] and board[i][m-1] == 'O')
                dfs(i, m-1, n, m, visited, board, dx, dy);
        }
        
        for(int j = 0; j < m; ++j)
        {
            if(!visited[0][j] and board[0][j] == 'O')
                dfs(0, j, n, m , visited, board, dx, dy);
            if(!visited[n-1][j] and board[n-1][j] == 'O')
                dfs(n-1, j, n, m, visited, board, dx, dy);
        }
        
        for(int i = 0 ; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(!visited[i][j] and board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
        
    }
};