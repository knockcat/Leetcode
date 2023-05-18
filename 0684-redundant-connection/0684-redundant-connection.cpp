class DSU
{
    private:
        vector<int> rank, parent, size;
    
    public:
        DSU(int n)
        {
            rank.resize(n+1, 0);
            parent.resize(n+1);
            size.resize(n+1, 0);
            
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
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n = edges.size();
        
        DSU dsu(n);
        
        vector<int> ans;
        
        for(auto itr : edges)
        {
            int u = itr[0];
            int v = itr[1];
            
            if(dsu.isSame(u,v))
            {
                ans.clear();
                ans.push_back(u);
                ans.push_back(v);
            }
            else
                dsu.unionByRank(u,v);
        }
        
        return ans;
        
    }
};