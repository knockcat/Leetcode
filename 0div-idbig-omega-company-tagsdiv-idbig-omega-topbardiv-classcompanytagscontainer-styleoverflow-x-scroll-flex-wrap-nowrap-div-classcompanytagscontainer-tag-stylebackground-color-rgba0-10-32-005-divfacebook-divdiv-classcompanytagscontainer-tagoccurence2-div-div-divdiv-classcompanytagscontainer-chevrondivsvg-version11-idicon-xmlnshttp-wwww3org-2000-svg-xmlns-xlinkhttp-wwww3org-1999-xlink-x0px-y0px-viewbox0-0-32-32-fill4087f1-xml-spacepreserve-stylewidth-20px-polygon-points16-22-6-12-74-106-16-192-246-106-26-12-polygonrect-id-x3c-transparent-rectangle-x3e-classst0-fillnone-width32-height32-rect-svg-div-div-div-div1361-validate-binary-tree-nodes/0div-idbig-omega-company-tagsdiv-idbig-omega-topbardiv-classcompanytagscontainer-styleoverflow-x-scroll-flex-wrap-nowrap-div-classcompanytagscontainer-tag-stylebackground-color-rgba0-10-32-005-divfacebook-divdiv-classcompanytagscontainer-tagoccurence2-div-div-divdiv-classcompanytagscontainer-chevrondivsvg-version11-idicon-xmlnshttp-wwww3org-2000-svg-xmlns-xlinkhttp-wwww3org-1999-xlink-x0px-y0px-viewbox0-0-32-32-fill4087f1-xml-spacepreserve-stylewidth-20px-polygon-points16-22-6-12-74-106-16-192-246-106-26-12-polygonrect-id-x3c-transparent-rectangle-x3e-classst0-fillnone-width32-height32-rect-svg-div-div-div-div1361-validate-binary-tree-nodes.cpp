class DSU{
  private:
    vector<int> parent, size, rank;
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
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        
        vector<int> indegree(n+1, 0);
        
        DSU dsu(n);
        
        for(int i = 0; i < n; ++i)
        {
            if(leftChild[i] != -1 and ++indegree[leftChild[i]] > 1)
                return false;
            if(rightChild[i] != -1 and ++indegree[rightChild[i]] > 1)
                return false;
            
            if(leftChild[i] != -1)
            {
                if(dsu.findParent(i) == dsu.findParent(leftChild[i]))
                   return false;
                else
                   dsu.unionByRank(i, leftChild[i]);
            }
            
            if(rightChild[i] != -1)
            {
                if(dsu.findParent(i) == dsu.findParent(rightChild[i]))
                   return false;
                else
                    dsu.unionByRank(i, rightChild[i]);
            }
        }
        
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(dsu.findParent(i) == i)
                ++cnt;
        }
        
        return cnt == 1;
    }
};