// ✅1572. Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int x = 0, y = 0;
        int n = mat.size();
        
        for(int i = 0; i < n; i++)
        {
            x += mat[i][i];        //primary
            y += mat[i][n-i-1];    //secondary
        }
        
       if( n % 2 == 0)
           return x+y;
        
        return x+y - mat[n/2][n/2]; //removes central element as we added twice;
    }
};
