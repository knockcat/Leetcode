class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int n = matrix.size(), m = matrix[0].size();
        
        vector<int> curr(m, 0), prev(m , 0);
        
        int ans = 0;
        
        for(int i = 0;  i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(i == 0 or j == 0)
                    curr[j] = matrix[i][j] - 48;
                
                if(i > 0 and j > 0 and matrix[i][j] != '0')
                {
                    int leftDiagonal = prev[j-1];
                    int bottomLeft = curr[j-1];
                    int topRight = prev[j];
                    
                    curr[j] = min({leftDiagonal, bottomLeft, topRight}) + 1;
                }
                ans = max(ans,curr[j]);
            }
            fill(prev.begin(),prev.end(),0);
            swap(prev,curr);
        }
        
        return ans * ans;
        
    }
};