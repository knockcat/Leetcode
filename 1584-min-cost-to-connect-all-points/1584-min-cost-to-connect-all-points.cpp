class DSU{
    private:
        vector<int> rank, parent, size;
    public:
        DSU(int n)
        {
            rank.resize(n+1, 0);
            size.resize(n+1, 1);
            parent.resize(n+1);
            
            for(int i = 0; i <= n; ++i)
                parent[i] = i;
        }
    
        int findParent(int u)
        {
            if(parent[u] == u)
                return parent[u];
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
            int parU = findParent(u);
            int parV = findParent(v);
            
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
            return findParent(u) == findParent(v);
        }
    
};

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        
        vector<tuple<int,int,int> > adj;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = i+1; j < n; ++j)
            {
                int weight = abs(points[j][0] - points[i][0]) + abs(points[j][1] - points[i][1]);
                
                adj.push_back({weight, i, j});
            }
        }
        
        
        sort(adj.begin(), adj.end());
        
        DSU dsu(n+1);
        
        int minimumCost = 0 ;
        
        for(auto& edges : adj)
        {
            int weight = get<0>(edges);
            int u = get<1>(edges);
            int v = get<2>(edges);
            
            if(!dsu.isSame(u, v))
            {
                minimumCost += weight;
                dsu.unionBySize(u, v);
            }
        }
        
        return minimumCost;
    }
};