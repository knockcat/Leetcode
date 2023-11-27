class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int ans = 0;
        
        vector<pair<int,int>> prevHeights;
        
        for(int row = 0; row < n; ++row)
        {
            vector<pair<int,int>> currHeights;
            vector<bool> visited(m, false);
            
            for(auto& [height, col] : prevHeights)
            {
                if(matrix[row][col] == 1)
                {
                    visited[col] = true;
                    currHeights.push_back({height+1, col});
                }
            }
            
            for(int col = 0; col < m; ++col)
            {
                if(!visited[col] and matrix[row][col] == 1)
                    currHeights.push_back({1, col});
            }
            
            
            for(int i = 0; i < currHeights.size(); ++i)
            {
                int height = currHeights[i].first;
                int base = i+1;
                ans = max(ans, height * base);
            }
            
            prevHeights = currHeights;
        }
        
        return ans;
    }
};