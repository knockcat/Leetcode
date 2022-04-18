// 59.✅ Spiral Matrix II

class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        int r1 = 0, r2 = n - 1;
        int c1 = 0, c2 = n - 1;
        int val = 0;
        vector<vector<int>> v(n, vector<int>(n));
        while (r1 <= r2 && c1 <= c2)
        {
            // left to right
            for (int i = c1; i <= c2; ++i)
                v[r1][i] = ++val;
            // move down
            for (int i = r1 + 1; i <= r2; ++i)
                v[i][c2] = ++val;
            // move right to left
            // move  up

            // move right to left;
            for (int i = c2 - 1; i >= c1; --i)
                v[r2][i] = ++val;
            // move up
            for (int i = r2 - 1; i > r1; --i)
                v[i][c1] = ++val;

            ++r1;
            --r2;
            ++c1;
            --c2;
        }
        return v;
    }
};
