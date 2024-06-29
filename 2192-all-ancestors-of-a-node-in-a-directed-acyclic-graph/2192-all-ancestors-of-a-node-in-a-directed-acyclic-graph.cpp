class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        
        
        vector<int> adj[n];
        
        for(auto& edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            
            adj[v].push_back(u);
        }
        
        vector<vector<int>> ans(n);
        
        vector<bool> visited(n, false);
        
        function<void(int, int)> dfs = [&](int sv, int idx) -> void{
            
            visited[sv] = true;
            
            for(auto& node : adj[sv])
            {
                if(!visited[node])
                {
                    ans[idx].push_back(node);
                    dfs(node, idx);
                }
            }
        };
        
        for(int i = 0; i < n; ++i)
        {
            dfs(i, i);
            
            fill(visited.begin(), visited.end(), false);
            
            sort(ans[i].begin(), ans[i].end());
        }
        
        return ans;
    }
};