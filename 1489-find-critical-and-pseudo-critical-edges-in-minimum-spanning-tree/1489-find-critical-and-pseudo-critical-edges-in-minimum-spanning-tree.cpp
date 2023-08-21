class Solution {
public:
    
    int N;
    
    class DSU{
        
        public :
            vector<int> parent, size, rank;
        
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
                int nodeX = findParent(u);
                int nodeY = findParent(v);
                
                if(nodeX == nodeY)
                    return;
                
                if(rank[nodeX] < rank[nodeY])
                {
                    parent[nodeX] = nodeY;
                }
                else if(rank[nodeY] < rank[nodeX])
                {
                    parent[nodeY] = nodeX;
                }
                else
                {
                    parent[nodeY] = nodeX;
                    ++rank[nodeY];
                }
            }
        
            void unionBySize(int u, int v)
            {
                int nodeX = findParent(u);
                int nodeY = findParent(v);
                
                if(nodeX == nodeY)
                    return;
                
                if(size[nodeX] < size[nodeY])
                {
                    parent[nodeX] = nodeY;
                    size[nodeY] += size[nodeX];
                }
                else
                {
                    parent[nodeY] = nodeX;
                    size[nodeY] += size[nodeX];
                }
            }
        
            bool isSame(int u, int v)
            {
                return findParent(u) == findParent(v);
            }
    };
    
    int kruskals(vector<vector<int>>& edges, int skip_edge, int add_edge)
    {
        DSU dsu(N);
        
        int edges_cnt = 0;
        
        int mstWeight = 0;
        
        if(add_edge != -1)
        {
            dsu.unionBySize(edges[add_edge][0], edges[add_edge][1]);
            mstWeight += edges[add_edge][2];
            ++edges_cnt;
        }
        
        for(int i = 0; i < edges.size(); ++i)
        {
            if(i == skip_edge)
                continue;
            
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            if(dsu.isSame(u, v))
            {
                continue;
            }
            else
            {
                dsu.unionBySize(u, v);
                mstWeight += wt;
                ++edges_cnt;
            }
        }
        
        if(edges_cnt != N-1)
            return INT_MAX;
        
        return mstWeight;
    }
    
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        
        // JAI SHREE RAM 
        
        N = n;
        
        for(int i = 0; i < edges.size(); ++i)
            edges[i].push_back(i);
        
        sort(edges.begin(), edges.end(), [&](const auto &a, const auto &b){
            return a[2] < b[2];
        });
        
        int mstWeight = kruskals(edges, -1, -1);
        
        vector<int> critical, pseudoCritical;
        
        for(int i = 0; i < edges.size(); ++i)
        {
            if(kruskals(edges, i, -1) > mstWeight)
                critical.push_back(edges[i].back());
            else if(kruskals(edges, -1, i) == mstWeight)
                pseudoCritical.push_back(edges[i].back());
        }
        
        return {critical, pseudoCritical};
    }
};