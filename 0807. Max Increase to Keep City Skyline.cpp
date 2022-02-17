// 807.✅ Max Increase to Keep City Skyline

class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {

        int res = 0;
        vector<int> max_row(grid.size());
        vector<int> max_col(grid[0].size());

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                max_row[i] = max(max_row[i], grid[i][j]);
                max_col[j] = max(max_col[j], grid[i][j]);
            }
        }

        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                res += min(max_row[i], max_col[j]) - grid[i][j];
            }
        }

        return res;
    }
};