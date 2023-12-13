class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();
        
        vector<int> row(n), col(m);
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(mat[i][j] == 1)
                    ++row[i], ++col[j];
            }
        }
        
        int specialPosition = 0;
                                    
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(mat[i][j] and row[i] == 1 and col[j] == 1)
                    ++specialPosition;
            }
        }
        
        return specialPosition;
    }
};