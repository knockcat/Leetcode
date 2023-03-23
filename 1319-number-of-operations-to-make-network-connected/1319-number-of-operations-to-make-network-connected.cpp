class Solution {
public:
    
    void dfs(int sv, vector<bool>& visited, vector<int> adj[]){
        visited[sv] = true;
        
        for(auto itr : adj[sv])
        {
            if(!visited[itr])
                dfs(itr, visited, adj);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        int edges = connections.size();
        
        if(n-1 > edges)
            return -1;
        
        vector<int> adj[n+1];
        for(auto itr : connections)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        
        vector<bool> visited(n+1,false);
        int cnt = 0;
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
            {
                dfs(i, visited, adj);
                ++cnt;
            }
        }
        
        return cnt - 1;
        
    }
};