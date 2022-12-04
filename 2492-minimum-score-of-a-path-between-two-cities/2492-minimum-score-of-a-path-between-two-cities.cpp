class Solution {
public:
    
    void dfs(int sv, vector<bool>& visited, vector<pair<int,int>> adj[])
    {
        visited[sv] = true;
        for(auto itr : adj[sv])
        {
            if(!visited[itr.first])
                dfs(itr.first,visited,adj);
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(int i = 0; i<roads.size(); ++i)
        {
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        
        vector<bool> visited(n+1,false);
        int ans = INT_MAX;
        dfs(1,visited,adj);
               
        for(int i = 0; i<roads.size(); ++i)
        {
            if(visited[roads[i][0]] and visited[roads[i][1]])
                ans = min(ans,roads[i][2]);
        }
        
        return ans;
    }
};