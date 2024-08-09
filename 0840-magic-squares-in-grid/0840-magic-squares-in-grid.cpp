class Solution {
public:
    
    int checkMatrix(vector<vector<int>>& mat)
    {
        
        int diagSumA = 0, diagSumB = 0, end = 2;
        map<int, int> mp;
        vector<int> freq(10, 0);
        
        for(int i = 0; i < mat.size(); ++i)
        {
            int sum = 0;
            for(int j = 0; j < mat[0].size(); ++j)
            {
                if(mat[i][j] >= 0 and mat[i][j] <= 9)
                    ++freq[mat[i][j]];
                sum += mat[i][j];
                if(i == j)
                    diagSumA += mat[i][j];
                if(j == end)
                {
                    diagSumB += mat[i][j];
                    --end;
                }
            }
            ++mp[sum];
        }
        
        for(int j = 0; j < mat[0].size(); ++j)
        {
            int sum = 0;
            for(int i = 0; i < mat.size(); ++i)
                sum += mat[i][j];
            ++mp[sum];
        }
        
        for(int i = 1; i <= 9; ++i)
        {
            if(freq[i] == 0)
                return 0;
        }
        
        ++mp[diagSumA];
        ++mp[diagSumB];
        
        return mp.size() == 1;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int ans = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                vector<vector<int>> mat;  
                
                if(i + 3 > n or j + 3 > m)
                    break;
                for(int k = i; k < i + 3; ++k)
                {
                    vector<int> row;
                    for(int l = j; l < j + 3; ++l)
                        row.push_back(grid[k][l]);
                    mat.push_back(row);
                }
                
                if(checkMatrix(mat))
                    ++ans;
            }
        }
        
        return ans;
        
    }
};