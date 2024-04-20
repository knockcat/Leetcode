class DSU{
    private:
        vector<int> size, rank, parent;
    public:
        DSU(int n)
        {
            int N = n;
            size.resize(N, 1);
            rank.resize(N, 0);
            parent.resize(N);
            for(int i = 0; i < N; ++i)
                parent[i] = i;
        }
    
        int findParent(int u)
        {
            if(u == parent[u])
                return u;
            return parent[u] = findParent(parent[u]);
        }
    
        void unionByRank(int u, int v)
        {
            int parU = findParent(u);
            int parV = findParent(v);
            
            if(parU == parV)
                return;
            
            if(rank[parU] < rank[parV])
            {
                parent[parU] = parV;
            }
            else if(rank[parU] > rank[parV])
            {
                parent[parV] = parU;
            }
            else
            {
                parent[parV] = parU;
                ++rank[parU];
            }
        }
        
        void unionBySize(int u, int v)
        {
            int parU = findParent(u);
            int parV = findParent(v);

            if(parU == parV)
                return;

            if(size[parU] < size[parV])
            {
                parent[parU] = parV;
                size[parV] += size[parU];
            }
            else{
                parent[parV] = parU;
                size[parU] += size[parV];
            }
        }

        bool isSame(int u, int v)
        {
            return findParent(u) == findParent(v);
        }
};

class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
        int n = land.size();
        int m = land[0].size();
        
        vector<int> dx = {-1, 0, 0, +1};
        vector<int> dy = {0, -1, +1, 0};
        
        auto isValid = [&](int x, int y)->bool
        {
            return (x >= 0 and y >= 0 and x < n and y < m);
        };
        
        DSU dsu((n*m) + 1);
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(land[i][j] == 1)
                {
                    int node = (i * m) + j;
                    
                    for(int k = 0; k < 4; ++k)
                    {
                        int nx = dx[k] + i;
                        int ny = dy[k] + j;
                        
                        if(isValid(nx, ny) and land[nx][ny] == 1)
                        {
                            int adjNode = (nx * m) + ny;
                            
                            if(!dsu.isSame(node, adjNode))
                                dsu.unionBySize(node, adjNode);
                        }
                    }
                }
            }
        }
        
        map<int, vector<int>> mp;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(land[i][j] == 1)
                {
                    int node = (i * m) + j;
                    int par = dsu.findParent(node);
                    
                    if(mp.find(par) == mp.end())
                    {
                        mp[par] = {i, j, i, j};
                    }
                    else
                    {
                        mp[par][2] = i;
                        mp[par][3] = j;
                    }
                    
                }
            }
        }
        
        vector<vector<int>> res;
        
        for(auto&[_, vec] : mp)
            res.push_back(vec);
        
        return res;
        
    }
};