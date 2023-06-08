class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        int i = n-1, j = 0;
        
        int negCnt = 0;
        
        while(i >= 0 and j < m)
        {
            if(grid[i][j] >= 0)
                ++j;
            else
            {
                negCnt += m - j;
                --i;
            }
        }
        
        return negCnt;
        
    }
};