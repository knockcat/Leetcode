// 1091.✅ Shortest Path in Binary Matrix

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        queue<pair<pair<int, int>, int>> q;
        q.push({{0, 0}, 1});

        if (grid[0][0] == 1)
            return -1;

        if (grid[0][0] == 0 && grid.size() == 1 && grid[0].size() == 1)
            return 1;

        vector<vector<bool>> visited(grid.size(), vector<bool>(grid.size(), false));

        visited[0][0] = true;

        while (!q.empty())
        {
            pair<int, int> p = q.front().first;
            int x = p.first;
            int y = p.second;

            int lengthofpath = q.front().second;
            q.pop();

            vector<pair<int, int>> neighbours = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {-1, -1}, {1, -1}, {-1, 1}};

            for (pair<int, int> neighbour : neighbours)
            {
                int newx = neighbour.first + x;
                int newy = neighbour.second + y;

                if (newx >= 0 && newy >= 0 && newx < grid.size() && newy < grid[0].size() && grid[newx][newy] == 0 && !visited[newx][newy])
                {
                    q.push({{newx, newy}, lengthofpath + 1});
                    visited[newx][newy] = true;

                    if (newx == grid.size() - 1 && newy == grid[0].size() - 1)
                        return lengthofpath + 1;
                }
            }
        }
        return -1;
    }
};