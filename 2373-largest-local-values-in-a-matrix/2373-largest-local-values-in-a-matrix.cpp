class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        
        vector<vector<int>> ans;
        
        for(int i = 0; i < n-2; ++i)
        {
            vector<int> curr;
            for(int j = 0; j < n-2; ++j)
            {
                int maxi = -1;
                for(int row = i; row < i+3; ++row)
                {
                    for(int col = j; col < j+3; ++col)
                    {
                        maxi = max(maxi, grid[row][col]);
                    }
                }
                curr.push_back(maxi);
            }
            ans.push_back(curr);
        }
        
        return ans;
    }
};