//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        int landCell = 0;
        
        vector<int> dx = {0, +1, 0, -1};
        vector<int> dy = {+1, 0, -1, 0};
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        function<void(int,  int)> dfs = [&](int i, int j){
            
            visited[i][j] = true;
            
            for(int x = 0; x < 4; ++x)
            {
                int newX = dx[x] + i;
                int newY = dy[x] + j;
                
                if(newX >= 0 and newY >= 0 and newX < n and newY < m and !visited[newX][newY] and grid[newX][newY] == 1)
                {
                    dfs(newX, newY);
                }
            }
            
        };
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if((i == 0 or j == 0 or i == n-1 or  j == m-1) and (grid[i][j] == 1 and !visited[i][j]))
                {
                    dfs(i,j);
                }
            }
        }
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(!visited[i][j] and grid[i][j] == 1)
                    ++landCell;
            }
        }
        
        return landCell;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends