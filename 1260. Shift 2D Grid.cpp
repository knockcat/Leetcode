class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {

        vector<vector<int>> ans(grid.size(), vector<int>(grid[0].size()));
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int newcol = (j + k) % m;
                int newrow = (i + (j + k) / m) % n;
                ans[newrow][newcol] = grid[i][j];
            }
        }

        return ans;
    }
};