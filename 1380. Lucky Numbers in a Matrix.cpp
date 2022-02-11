// 1380.✅ Lucky Numbers in a Matrix

class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> rmin(r, INT_MAX);
        vector<int> cmax(c, INT_MIN);

        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                rmin[i] = min(rmin[i], matrix[i][j]);
                cmax[j] = max(cmax[j], matrix[i][j]);
            }
        }

        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (rmin[i] == matrix[i][j] && cmax[j] == matrix[i][j])
                    ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};