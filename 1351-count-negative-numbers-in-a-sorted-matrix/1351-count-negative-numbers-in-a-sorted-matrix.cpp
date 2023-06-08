class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        int end = m-1, cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(grid[i][0] < 0)
            {
                cnt += m;
            }
            else if(grid[i][m-1] >= 0)
            {
                continue;
            }
            else
            {
                int low = 0, high = end;
                
                while(low <= high)
                {
                    int mid = low + (high - low)/2;
                    
                    if(grid[i][mid] >= 0)
                        low = mid+1;
                    else
                        high = mid-1;
                }
                
                cnt += m - low;
                end = low;
            }
        }
        
        return cnt;
        
    }
    
};