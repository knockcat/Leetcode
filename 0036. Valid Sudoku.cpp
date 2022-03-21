// 36.✅ Valid Sudoku

class Solution
{
public:
    bool isValid(vector<vector<char>> &board, int row, int col)
    {
        int c = board[row][col];
        board[row][col] = '.';
        for (int i = 0; i < 9; i++)
            if (board[row][i] == c)
                return false;
        for (int i = 0; i < 9; i++)
            if (board[i][col] == c)
                return false;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (board[row / 3 * 3 + i][col / 3 * 3 + j] == c)
                    return false;

        board[row][col] = c;
        return true;
    }

    bool isValidSudoku(vector<vector<char>> &board)
    {

        // Go for all the rows & columns looking for an invalid number
        // If you find an invalid entry, return false
        // If you don not find an invalid entry till the end, it has to be good, return true.
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.' && !isValid(board, i, j))
                {
                    return false;
                }
            }
        }
        return true;
    }
};