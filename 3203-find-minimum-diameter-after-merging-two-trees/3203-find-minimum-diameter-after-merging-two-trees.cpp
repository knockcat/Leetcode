class Solution {
public:
    
    void constructingList(vector<vector<int>>& edges, vector<int> adj[])
    {
        for(auto& edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    
    int maximumDiameter(vector<int> adj[], int n)
    {
        vector<int> dist(n, 0);
        
        function<void(int,int)> dfs = [&](int sv, int d)
        {
            dist[sv] = d;
            for(auto& node : adj[sv])
            {
                if(dist[node] == 0)
                    dfs(node, d+1);
            }
        };
        
        dfs(0, 1);
        int farthest = max_element(dist.begin(), dist.end()) - dist.begin();
        fill(dist.begin(), dist.end(), 0);
        dfs(farthest, 1);
        return *max_element(dist.begin(), dist.end()) - 1;
    }
    
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
       
        int n = edges1.size();
        int m = edges2.size();
        
        vector<int> adj[n+1], adj2[m+1];
        
        constructingList(edges1, adj);
        constructingList(edges2, adj2);
        
        int diameter1 = maximumDiameter(adj, n+1);
        int diameter2 = maximumDiameter(adj2, m+1);
        
        return max({diameter1, diameter2, (diameter1 + 1)/2 + (diameter2 + 1)/2 + 1});
    }
};