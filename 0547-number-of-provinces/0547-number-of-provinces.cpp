class DSU{
    private:
        vector<int> rank, parent, size;
    public:
        DSU(int n)
        {
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1, 1);
            
            for(int i = 0; i <= n; ++i)
                parent[i] = i;
        }
    
        int findPar(int u)
        {
            if(parent[u] == u)
                return parent[u];
            return parent[u] = findPar(parent[u]);
        }
    
        void unionByRank(int u, int v)
        {
            int parU = findPar(u);
            int parV = findPar(v);
            
            if(parU == parV)
                return;
            
            if(rank[parU] < rank[parV])
            {
                parent[parU] = parV;
            }
            else if(rank[parV] < rank[parU])
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
            int parU = findPar(u);
            int parV = findPar(v);
            
            if(parU == parV)
                 return;
            
            if(size[parU] < size[parV])
            {
                parent[parU] = parV;
                size[parV] += size[parU];
            }
            else
            {
                parent[parV] = parU;
                size[parU] += size[parV];
            }
        }
    
        bool isSame(int u, int v)
        {
            return findPar(u) == findPar(v);
        }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        int m = isConnected[0].size();
        
        DSU dsu(n);
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(isConnected[i][j] == 1)
                    dsu.unionBySize(i+1, j+1);
            }
        }
        
        int cnt = 0;
        
        for(int i = 1; i <= n; ++i)
        {
            if(dsu.findPar(i) == i)
                ++cnt;
        }
        
        return cnt;
        
    }
};