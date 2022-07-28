class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0, down = n - 1, left = 0, right = m - 1;
        int direction = 0;
        vector<int> v;

        while (top <= down && left <= right)
        {
            if (direction == 0) // left to right
            {
                for (int i = left; i <= right; ++i)
                    v.push_back(matrix[top][i]);
                top += 1;
            }
            else if (direction == 1) // top to bottom
            {
                for (int i = top; i <= down; ++i)
                    v.push_back(matrix[i][right]);
                right -= 1;
            }
            else if (direction == 2) // right to left
            {
                for (int i = right; i >= left; --i)
                {
                    v.push_back(matrix[down][i]);
                }
                down -= 1;
            }
            else if (direction == 3) // down to top
            {
                for (int i = down; i >= top; --i)
                {
                    v.push_back(matrix[i][left]);
                }
                left += 1;
            }
            direction = (direction + 1) % 4;
        }

        return v;
    }
};