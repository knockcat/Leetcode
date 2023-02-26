class Solution {
    
private:
    int timer = 0;
public:
    void dfs(int sv, int par, vector<int> adj[], vector<int>& visited, vector<int>& disc, vector<int>& low, vector<vector<int>>& bridges)
    {
        low[sv] = disc[sv] = ++timer;
        visited[sv] = 1;
        
        for(auto child : adj[sv])
        {
            if(child == par)
                continue;
            if(!visited[child])
            {
                dfs(child, sv, adj, visited, disc, low, bridges);
                low[sv] = min(low[sv],low[child]);
                
                if(low[child] > disc[sv])
                {
                    bridges.push_back({sv, child});
                }
            }
            else
            {
                low[sv] = min(low[sv],low[child]);
            }
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        // no of bridges in a graph
        
        vector<int> adj[n+1];
        vector<int> visited(n,false);
        vector<int> disc(n,-1), low(n,-1);
        vector<vector<int> > bridges;
        
        for(auto itr : connections)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
                dfs(i, -1, adj, visited, disc, low, bridges);
        }
        
        return bridges;
        
    }
};