class DSU{
    public:
    int N;
    vector<int> parent, size;
    
    DSU(int n)
    {
        N = n;
        parent.resize(N);
        size.resize(N, 1);
        
        for(int i = 0; i < n; ++i)
            parent[i] = i;
    }
    
    int findParent(int u)
    {
        if(u == parent[u])
        {
            return u;
        }
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
    
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        
        vector<int> ans;
        
        DSU dsu(n+1);
        
        vector<int> bitAnd(n, -1);
        
        for(auto& edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            
            if(bitAnd[u] == -1)
                bitAnd[u] = wt;
            else
                bitAnd[u] &= wt;
            
            if(bitAnd[v] == -1)
                bitAnd[v] = wt;
            else
                bitAnd[v] &= wt;
            
            if(!dsu.isSame(u, v))
            {
                dsu.unionBySize(u, v);
            }
        }
        
        map<int, int> mp;
        
        for(int i = 0; i < n; ++i)
        {
            int ultPar = dsu.findParent(i);
            if(bitAnd[ultPar] == -1)
                continue;
            if(mp.find(ultPar) == mp.end())
                mp[ultPar] = (bitAnd[i] & bitAnd[ultPar]);
            else
                mp[ultPar] &= bitAnd[i];
        }
        
        for(auto& q : query)
        {
            int u = q[0];
            int v = q[1];
            
            if(u == v)
                ans.push_back(0);
            else if(dsu.isSame(u, v))
                ans.push_back(mp[dsu.findParent(u)]);
            else
                ans.push_back(-1);
        }
        
        return ans;
    }
};