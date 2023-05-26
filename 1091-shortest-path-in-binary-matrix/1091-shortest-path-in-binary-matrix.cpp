class Solution {
    
private:
    bool isValid(int x, int y, int n, int m)
    {
        return (x >= 0 and y >= 0 and x < n and y < m);
    }
    
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>> ,greater<pair<int, pair<int,int>>> > pq;
        
        if(grid[0][0] == 0)
        {
            pq.push({1,{0, 0}});
        }
        else
            return -1;
        
        vector<int> dx = {-1, -1, -1, 0,  1,  1,  1,  0};
        vector<int> dy = {-1,  0, +1, +1, +1, 0, -1, -1};
        
        while(!pq.empty())
        {
            int dist = pq.top().first;
            
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            
            pq.pop();
            
            if(x == n-1 and y == m-1)
            {
                return dist;
            }
            
            for(int i = 0; i < 8; ++i)
            {
                int newx = dx[i] + x;
                int newy = dy[i] + y;
                
                if(isValid(newx, newy, n, m) and grid[newx][newy] == 0)
                {
                    grid[newx][newy] = 1;
                    
                    pq.push({dist + 1, {newx, newy}});
                }
            }
        }
        
        return -1;
    }
};