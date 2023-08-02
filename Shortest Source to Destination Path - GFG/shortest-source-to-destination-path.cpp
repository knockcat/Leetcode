//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        
        vector<vector<bool>> visited(N, vector<bool>(M,false));
        
        queue<pair<int,pair<int,int>> > q;
        
        
        vector<int> dx = {-1, 0, 0, 1};
        vector<int> dy = {0, -1, +1, 0};
        
        q.push({0,{0, 0}});
        
        visited[0][0] = true;
        
        while(!q.empty())
        {
            auto curr = q.front();
            q.pop();
            
            int step = curr.first;
            int x = curr.second.first;
            int y = curr.second.second;
            
            if(x == X and y == Y)
            {
                return step;
            }
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                
                if(newx >= 0 and newy >= 0 and newx < N and newy < M and !visited[newx][newy] and A[newx][newy] == 1)
                {
                    visited[newx][newy] = true;
                    q.push({step+1,{newx,newy}});
                }
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends