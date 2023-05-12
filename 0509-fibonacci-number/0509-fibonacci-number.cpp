class Solution {
public:
    
    
    vector<vector<int>> expo(vector<vector<int>> mat, int n)
    {
        vector<vector<int>> ans =  mat;
        
        if(n == 1)
            return mat;
        
        
        while( n > 0)
        {
            if(n & 1)
                ans = mult(ans, mat);
            
            mat = mult(mat, mat);
            
            n >>= 1;
        }
        
        return ans;
    }
    
    vector<vector<int>> mult(vector<vector<int>>mat1, vector<vector<int>> mat2)
    {
        vector<vector<int>> ans(2, vector<int>(2));
        
        for(int i = 0; i < 2; ++i)
        {
            for(int j = 0; j < 2; ++j)
            {
                for(int k = 0; k < 2; ++k)
                {
                    ans[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        
        return ans;
        
    }
    
    int fib(int n) {
        
        if(n == 0)
            return 0;
        
        vector<vector<int>> mat = {{1,1}, {1,0}};
        
        vector<vector<int>> ans = expo(mat, n-1);
        
        return ans[0][1];
    }
};