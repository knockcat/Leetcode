class Solution {
public:
    
    bool isValid(int x, int y, int n)
    {
        return (x >= 0 and y >= 0 and x < n and y < n);
    }
    
    bool checkValidGrid(vector<vector<int>>& grid) {
     
        int n = grid.size();
        
        int start = 0; int end = (n * n) - 1 ;
        
        int currx = 0, curry = 0;
        
        vector<int> dx = {-1,-2,-1,-2,1,2,1,2};
        vector<int> dy = {-2,-1,+2,+1,-2,-1,2,1};
        
        if(grid[0][0] != start)
            return false;
        
        while(start < end)
        {
            bool ok = false;
            ++start;
            for(int i = 0; i < 8; ++i)    
            {
                int newx = currx + dx[i];
                int newy = curry + dy[i];
                
                if(isValid(newx,newy,n) and grid[newx][newy] == start)
                {
                    currx = newx;
                    curry = newy;
                    ok = true;
                    break;
                }
            }
            if(!ok)
                return false;
        }
        return true;
    }
};