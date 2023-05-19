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
    
        int findParent(int u)
        {
            if(parent[u] == u)
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
    int removeStones(vector<vector<int>>& stones) {
        
        int n = stones.size();
        
        int maxRow = 0, maxCol = 0;
        
        for(auto itr : stones)
        {
            maxRow = max(maxRow, itr[0]);
            maxCol = max(maxCol, itr[1]);
        }
        
        DSU dsu(maxRow + maxCol + 1);
        
        unordered_map<int, int> mp;
        
        for(auto itr : stones)
        {
            int row = itr[0];
            int col = itr[1] + maxRow + 1;
            
            dsu.unionBySize(row, col);
            
            mp[row] = 1;
            mp[col] = 1;
        }
        
        int cnt = 0;
        
        for(auto itr : mp)
        {
            if(itr.first == dsu.findParent(itr.first))
                ++cnt;
        }
        
        return n - cnt;
        
    }
};