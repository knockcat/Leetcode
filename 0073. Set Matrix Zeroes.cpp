// 73.✅ Set Matrix Zeroes

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> rowmaker(row, 1);
        vector<int> colmaker(col, 1);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    rowmaker[i] = 0;
                    colmaker[j] = 0;
                }
            }
        }

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                if (rowmaker[i] == 0 || colmaker[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
};