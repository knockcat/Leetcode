template <typename T>
class DSU
{
public:
    int N;
    vector<T> rank, parent, size;
    DSU(int n)
    {
        N = n;
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);
        parent.resize(n + 1);

        for (T i = 0; i <= n; ++i)
        {
            parent[i] = i;
        }
    }

    template <typename X>
    X findParent(X u)
    {
        if (u == parent[u])
            return u;
        return parent[u] = findParent(parent[u]);
    }

    // Not be using unionByRank
    // but yes for future reference
    template <typename X>
    void unionByRank(X u, X v)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
            return;

        if (rank[nodeX] < rank[nodeY])
        {
            parent[nodeX] = nodeY;
        }
        else if (rank[nodeY] < rank[nodeX])
        {
            parent[nodeY] = nodeX;
        }
        else
        {
            parent[nodeY] = nodeX;
            ++rank[nodeX];
        }
    }

    void unionBySize(int u, int v)
    {
        int nodeX = findParent(u);
        int nodeY = findParent(v);

        if (nodeX == nodeY)
            return;

        if (size[nodeX] < size[nodeY])
        {
            parent[nodeX] = nodeY;
            size[nodeY] += size[nodeX];
        }
        else
        {
            parent[nodeY] = nodeX;
            size[nodeX] += size[nodeY];
        }
    }

    template <typename X>
    bool isSame(X u, X v)
    {
        return findParent(u) == findParent(v);
    }
};
// DSU<int> dsu(n);

// dsu.unionByRank(u, v);
// dsu.unionBySize(u,v);
// dsu.isSame(u, v) bool


class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        int m = isConnected[0].size();
        int provinces = 0;
        
        DSU<int> dsu(n);
        for(int i = 0; i< n; ++i)
        {
            for(int j = 0; j<m; ++j)
            {
                if(isConnected[i][j])
                    dsu.unionBySize(i,j);
            }
        }
    
        for(int i = 0; i < n; ++i)
        {
            if(dsu.findParent(i) == i)
                ++provinces;
        }

        return provinces;
    }
};