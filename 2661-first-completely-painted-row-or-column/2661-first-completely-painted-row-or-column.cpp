class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();
        
        vector<int> row(n), col(m);
        
        map<int,pair<int,int>> mp;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                mp[mat[i][j]] = {i,j};
            }
        }
        
        for(int i = 0; i < arr.size(); ++i)
        {
            int r= mp[arr[i]].first;
            int c = mp[arr[i]].second;
                
            ++row[r], ++col[c];
            
            if(row[r] == m or col[c] == n)
                return i;
        }
        
        return -1;
        
    }
};