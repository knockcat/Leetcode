class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        // prefix sum
        
        for(int row = 0; row < m; ++row)
        {
            for(int col = 1; col < n; ++col)
            {
                matrix[row][col] += matrix[row][col-1];
            }
        }
        
        int count = 0;
        
        // fix 2 colums
        
        for(int c1 = 0; c1 < n; ++c1)
        {
            for(int c2 = c1; c2 < n; ++c2)
            {
                unordered_map<int,int> mp;
                int sum = 0;
                mp.insert({0,1});
                
                for(int row = 0; row < m; ++row)
                {
                    sum += matrix[row][c2] - (c1 > 0 ? matrix[row][c1-1] : 0);
                    count += mp[sum-target];
                    
                    if(mp.find(sum) != mp.end())
                        ++mp[sum];
                    else
                        mp[sum] = 1;
                }
            }
        }
        
        return count;
    }
};