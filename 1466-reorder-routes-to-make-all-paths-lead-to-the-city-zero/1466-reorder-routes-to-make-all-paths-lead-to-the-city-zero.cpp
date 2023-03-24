class Solution {
public:
    
    void dfs(int sv, vector<pair<int,int>> adj[], vector<bool>& visited, int& cnt)
    {
        visited[sv] = true;
        
        for(auto itr : adj[sv])
        {
            if(!visited[itr.first])
            {
                if(itr.second == 1)
                    ++cnt;
                dfs(itr.first,adj,visited,cnt);
            }
        }
    }
    
    int minReorder(int n, vector<vector<int>>& connections) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(auto itr : connections)
        {
            adj[itr[0]].push_back({itr[1],1});
            adj[itr[1]].push_back({itr[0],0});
        }
        
        vector<bool> visited(n+1,false);
        int cnt = 0 ;
        dfs(0,adj,visited,cnt);
        
        return cnt;
    }
};