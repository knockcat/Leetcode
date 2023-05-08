class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();
        
        int sum = 0;
        
        for(int i = 0; i < n; ++i)
        {
            sum += (mat[i][n-i-1] + mat[i][i]);
        }
        
        sum = (n & 1) ? sum - mat[n/2][n/2] : sum;
        
        return sum;

    }
};