class DSU{
    public:
        int N;
        vector<int> parent, size;

        DSU(int n)
        {
            N = n;
            parent.resize(N);
            size.resize(N, 1);
            for(int i = 0; i < N; ++i)
                parent[i] = i;
        }
    
        int findParent(int u)
        {
            if(u == parent[u])
                return u;
            return parent[u] = findParent(parent[u]);
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
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size(), m = grid[0].size();

        vector<int> dx = {-1, 0, 0, +1};
        vector<int> dy = {0, -1, +1 ,0};
        
        DSU dsu(n*m + 1);
        
        set<int> ls;
        
        int island = 0;
        
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(grid[i][j] == '1')
                {
                    ls.insert((i*m) + j);
                    for(int k = 0; k < 4; ++k)
                    {
                        int cx = dx[k] + i;
                        int cy = dy[k] + j;

                        if(cx >= 0 and cy >= 0 and cx < n and cy < m and grid[cx][cy] == '1')
                        {
                            int node = (i * m) + j;
                            int adjNode = (cx * m) + cy;

                            if(!dsu.isSame(node, adjNode))
                            {
                                dsu.unionBySize(node, adjNode);
                            }
                        }
                    }
                }
            }
        }
        
        for(auto& node : ls)
        {
            if(dsu.findParent(node) == node)
                ++island;
        }
        
        return island;
        
    }
};