// 1039.✅ Minimum Score Triangulation of Polygon

class Solution
{
public:
    int t[100][100];

    // Matrix Chain Multiplication
    int solve(vector<int> &values, int i, int j)
    {
        if (i >= j)
            return 0;
        if (t[i][j] != -1)
            return t[i][j];

        int ans = INT_MAX;
        for (int k = i; k < j; ++k)
        {
            int tempans = solve(values, i, k) + solve(values, k + 1, j) + values[i - 1] * values[k] * values[j];

            ans = min(ans, tempans);
        }

        return t[i][j] = ans;
    }

    int minScoreTriangulation(vector<int> &values)
    {

        int n = values.size();

        memset(t, -1, sizeof(t));

        int ans = solve(values, 1, n - 1);

        return ans;
    }
};