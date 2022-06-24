// 120.✅ Triangle

class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();

        vector<int> t(n, 0);

        for (int i = 0; i < n; ++i)
            t[i] = triangle[n - 1][i];

        for (int i = n - 2; i >= 0; --i)
        {
            for (int j = 0; j < triangle[i].size(); ++j)
                t[j] = min(t[j], t[j + 1]) + triangle[i][j];
        }

        return t[0];
    }
};