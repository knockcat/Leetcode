// 1476.✅ Subrectangle Queries

class SubrectangleQueries
{
public:
    vector<vector<int>> rect;
    SubrectangleQueries(vector<vector<int>> &rectangle)
    {
        rect = rectangle;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; ++i)
            for (int j = col1; j <= col2; ++j)
                rect[i][j] = newValue;
        return;
    }

    int getValue(int row, int col)
    {
        return rect[row][col];
    }
};
