// 289.✅ Game of Life

class Solution
{
public:
    int check(vector<vector<int>> v, int i, int j, int n, int m)
    {
        int ind = 0;
        if (i > 0)
        {
            if (v[i - 1][j] == 1)
                ++ind;
        }
        if (j > 0)
        {
            if (v[i][j - 1] == 1)
                ++ind;
        }
        if (i < m - 1)
        {
            if (v[i + 1][j] == 1)
                ++ind;
        }
        if (j < n - 1)
        {
            if (v[i][j + 1] == 1)
                ++ind;
        }
        if (i > 0 && j > 0)
        {
            if (v[i - 1][j - 1] == 1)
                ++ind;
        }
        if (i < m - 1 && j < n - 1)
        {
            if (v[i + 1][j + 1] == 1)
                ++ind;
        }
        if (i > 0 && j < n - 1)
        {
            if (v[i - 1][j + 1] == 1)
                ++ind;
        }
        if (j > 0 && i < m - 1)
        {
            if (v[i + 1][j - 1] == 1)
                ++ind;
        }
        return ind;
    }

    void gameOfLife(vector<vector<int>> &board)
    {
        vector<vector<int>> v = board;

        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int ind = check(v, i, j, n, m);
                if (board[i][j] == 0)
                {
                    if (ind == 3)
                        board[i][j] = 1;
                }
                else
                {
                    if (ind < 2 || ind > 3)
                        board[i][j] = 0;
                }
            }
        }
    }
};