class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        vector<vector<int>> mat(n, vector<int>(n, 1e9));
        
        for(auto itr : edges)
        {
            int i = itr[0];
            int j = itr[1];
            int wt = itr[2];
        
            mat[i][j] = wt;
            mat[j][i] = wt;
        }
        
        for(int k = 0; k < n; ++k)
        {
            for(int i = 0; i < n; ++i)
            {
                for(int j = 0; j < n; ++j)
                {
                    if(i == j)
                        mat[i][j] = 0;
                    
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                }
            }
        }
        
        // for(auto itr : mat)
        // {
        //     for(auto x : itr)
        //         cout<<x<<' ';
        //     cout<<endl;
        // }
        
        vector<pair<int,int>> vp;
        
        for(int i = 0; i < n; ++i)
        {
            int cnt = 0;
            for(int j = 0; j < n; ++j)
            {
                if(mat[i][j] <= distanceThreshold)
                {
                    ++cnt;
                }
            }
            vp.push_back({cnt, i});
        }
        
        sort(vp.begin(), vp.end(),[&](const auto &a, const auto &b){
            if(a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        });
        
        // for(auto itr : vp)
        //     cout<<itr.first<<' '<<itr.second<<endl;
        
        return vp[0].second;
        
    }
};