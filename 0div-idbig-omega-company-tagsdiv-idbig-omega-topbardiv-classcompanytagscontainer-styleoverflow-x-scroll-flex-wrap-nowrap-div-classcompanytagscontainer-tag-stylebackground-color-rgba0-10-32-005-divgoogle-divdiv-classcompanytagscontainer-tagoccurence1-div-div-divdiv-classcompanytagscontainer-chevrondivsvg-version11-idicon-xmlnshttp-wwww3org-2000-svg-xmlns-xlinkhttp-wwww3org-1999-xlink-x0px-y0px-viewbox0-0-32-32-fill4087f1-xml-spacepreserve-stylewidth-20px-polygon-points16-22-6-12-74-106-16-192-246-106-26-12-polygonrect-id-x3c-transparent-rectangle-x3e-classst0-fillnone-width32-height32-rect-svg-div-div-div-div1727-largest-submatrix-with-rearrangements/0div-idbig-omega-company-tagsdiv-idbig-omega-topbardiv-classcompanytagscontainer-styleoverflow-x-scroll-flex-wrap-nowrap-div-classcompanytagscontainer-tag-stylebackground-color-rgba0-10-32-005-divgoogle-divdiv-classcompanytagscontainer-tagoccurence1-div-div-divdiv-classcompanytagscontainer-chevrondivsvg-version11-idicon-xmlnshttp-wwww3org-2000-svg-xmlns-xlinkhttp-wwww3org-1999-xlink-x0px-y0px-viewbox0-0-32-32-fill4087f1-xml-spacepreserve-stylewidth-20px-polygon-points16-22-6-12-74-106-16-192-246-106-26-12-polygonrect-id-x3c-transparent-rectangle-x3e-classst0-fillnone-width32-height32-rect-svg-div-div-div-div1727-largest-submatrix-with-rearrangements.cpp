class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        
       int i, j, ans = 0, n = matrix.size(), m = matrix[0].size();
        
        for(i = 0; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                if(matrix[j][i] == 1)
                    matrix[j][i] = matrix[j-1][i] + matrix[j][i];
                else
                    matrix[j][i] = 0;
            }
        }

        for(i = 0; i < n; i++)
        {
            sort(matrix[i].begin(), matrix[i].end(), greater<int>());

            for(j = 0; j < m; j++)
                ans = max(ans, matrix[i][j] * (j + 1));
        }
        
        return ans;
    }
};