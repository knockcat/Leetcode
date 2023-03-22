class Solution {
public:
    
    void dfs(int sv, vector<pair<int,int>> adj[], vector<bool>& visited)
    {
        visited[sv] = true;
        for(auto itr : adj[sv])
        {
            if(!visited[itr.first])
                dfs(itr.first,adj,visited);
        }
    }
    
    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(auto itr : roads)
        {
            adj[itr[0]].push_back({itr[1],itr[2]});
            adj[itr[1]].push_back({itr[0],itr[2]});
        }
        
        vector<bool> visited(n+1,false);
        
        dfs(1,adj,visited);
        int ans = INT_MAX;
        
        for(auto itr : roads)
        {
            if(visited[itr[0]] and visited[itr[1]])
                ans = min(ans,itr[2]);
        }
        
        return ans;
    }
};