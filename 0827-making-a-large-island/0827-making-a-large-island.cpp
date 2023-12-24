class Solution {
public:
    
    class DSU{
        public:
            vector<int> parent, size, rank;
        public:
            DSU(int n)
            {
                parent.resize(n+1);
                size.resize(n+1, 1);
                rank.resize(n+1, 0);
                
                for(int i = 0; i <= n; ++i)
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
                    parent[parU] = parV;
                else if(rank[parV] > rank[parU])
                    parent[parV] = parU;
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
    
    int largestIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        DSU dsu((n*m) + 1);
        
        vector<int> dx = {-1, 0, +1, 0};
        vector<int> dy = {0, -1, 0, +1};
        
        auto isValid = [&](int x, int y)
        {
            return (x >= 0 and y >= 0 and x < n and y < m);
        };
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(grid[i][j] == 0)
                    continue;
                
                for(int k = 0; k < 4; ++k)
                {
                    int newx = dx[k] + i;
                    int newy = dy[k] + j;
                    
                    if(isValid(newx, newy) and grid[newx][newy])
                    {
                        int node = (i * m) + j;
                        int adjNode = (newx * m) + newy;
                        
                        if(!dsu.isSame(node, adjNode))
                            dsu.unionBySize(node, adjNode);
                    }
                }
            }
        }
        
        int maxi = -1;
        
        unordered_set<int> visited;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(grid[i][j] == 0)
                {   
                    for(int k = 0; k < 4; ++k)
                    {
                        int newx = dx[k] + i;
                        int newy = dy[k] + j;
                        
                        if(isValid(newx, newy) and grid[newx][newy])
                        {
                            visited.insert(dsu.findParent((newx*m) + newy));
                        }
                    }
                    
                     int curr = 0;
                
                    for(auto& ele : visited)
                        curr += dsu.size[ele];
                    
                    visited.clear();
                    
                    maxi = max(maxi, curr + 1);
                }
            }
        }
        
        
        return (maxi == -1 ?  (n * m) : maxi);
    }
};