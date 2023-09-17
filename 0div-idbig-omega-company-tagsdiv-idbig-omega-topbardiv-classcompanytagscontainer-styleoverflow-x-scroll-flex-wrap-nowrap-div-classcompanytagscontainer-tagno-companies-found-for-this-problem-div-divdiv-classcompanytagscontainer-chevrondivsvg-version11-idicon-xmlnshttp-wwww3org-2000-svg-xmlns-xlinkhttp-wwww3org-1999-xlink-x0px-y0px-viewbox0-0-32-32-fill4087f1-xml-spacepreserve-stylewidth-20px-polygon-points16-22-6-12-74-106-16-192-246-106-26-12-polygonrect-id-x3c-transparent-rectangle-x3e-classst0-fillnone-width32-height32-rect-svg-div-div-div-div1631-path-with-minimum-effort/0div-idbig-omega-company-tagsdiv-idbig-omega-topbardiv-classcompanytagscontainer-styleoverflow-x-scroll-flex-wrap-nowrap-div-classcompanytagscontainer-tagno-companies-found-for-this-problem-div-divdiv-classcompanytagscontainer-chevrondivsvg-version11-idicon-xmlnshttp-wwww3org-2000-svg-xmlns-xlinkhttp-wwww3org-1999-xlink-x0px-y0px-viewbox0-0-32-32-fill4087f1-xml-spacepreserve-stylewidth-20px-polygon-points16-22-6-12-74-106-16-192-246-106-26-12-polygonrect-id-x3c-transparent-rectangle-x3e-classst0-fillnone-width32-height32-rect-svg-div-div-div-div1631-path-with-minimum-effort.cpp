class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int n = heights.size();
        int m = heights[0].size();
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>> > pq;
        
        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        
        dist[0][0] = 0;
        
        pq.push({0, 0, 0});
        
        vector<int> dx = {0, +1, 0, -1};
        vector<int> dy = {+1, 0, -1, 0};
        
        while(!pq.empty())
        {
            auto currRoute = pq.top();
            pq.pop();
            
            int currDiff = get<0> (currRoute);
            int x = get<1> (currRoute);
            int y = get<2> (currRoute);
            
            for(int i = 0; i < 4; ++i)
            {
                int newx = dx[i] + x;
                int newy = dy[i] + y;
                
                if(newx >= 0 and newy >= 0 and newx < n and newy < m)
                {
                    int diff = max(currDiff, abs(heights[x][y] - heights[newx][newy]));
                    
                    if(diff < dist[newx][newy])
                    {
                        pq.push({diff, newx, newy});
                        dist[newx][newy] = diff;
                    }
                }
            }
        }
        
        return dist[n-1][m-1];
        
    }
};