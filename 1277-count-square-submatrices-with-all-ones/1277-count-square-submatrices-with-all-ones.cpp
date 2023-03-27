class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        int count = 0;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(j > 0 and i > 0 and matrix[i][j] > 0)
                    matrix[i][j] = min({matrix[i-1][j],matrix[i][j-1],matrix[i-1][j-1]}) + 1;
                count += matrix[i][j];
            }
        }
        
        return count;
        
    }
};