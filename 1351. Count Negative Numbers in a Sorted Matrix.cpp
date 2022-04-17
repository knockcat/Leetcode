// 1351.✅ Count Negative Numbers in a Sorted Matrix

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ind = 0;
        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (grid[i][j] < 0)
                    ++ind;
            }
        }
        return ind;
    }
};

class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ind = 0, m = grid.size(), n = grid[0].size(), i = 0, j = n - 1;

        while (i >= 0 && i < m && j >= 0 && j < n)
        {
            if (grid[i][j] < 0)
            {
                ind += m - i;
                --j;
            }
            else
                ++i;
        }
        return ind;
    }
};