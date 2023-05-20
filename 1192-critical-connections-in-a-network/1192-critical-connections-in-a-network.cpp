class Solution {
private:
    int timer = 0;
    
    void dfs(int sv, int par, vector<int> adj[], vector<bool>& visited, vector<int>& disc, vector<int>& low, vector<vector<int>>& bridges)
    {
        visited[sv] = true;
        
        disc[sv] = low[sv] = ++timer;
        
        for(auto itr : adj[sv])
        {
            if(itr == par)
                continue;
            
            if(!visited[itr])
            {
                dfs(itr, sv, adj, visited, disc, low, bridges);
                
                low[sv] = min(low[sv], low[itr]);
                    
                if(low[itr] > disc[sv])
                {
                    bridges.push_back({sv, itr});
                }
            }
            else
            {
                low[sv] = min(low[sv], low[itr]);
            }
        }
    }
    
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<int> adj[n];
        
        for(auto itr : connections)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        
        vector<bool> visited(n, false);
        
        vector<int> disc(n, 0) , low(n, 0);
        
        vector<vector<int>> bridges;
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
                dfs(i, -1, adj, visited, disc, low, bridges);
        }
        
        return bridges;
        
    }
};