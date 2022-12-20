class Solution {
public:
    
    void dfs(int sv, vector<vector<int>>& adj, vector<int>& visited)
    {
        visited[sv] = true;
        for(auto itr : adj[sv])
        {
            if(!visited[itr])
                dfs(itr,adj,visited);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        vector<int> visited(n,false);
        
        dfs(0,rooms,visited);
        
        for(int i = 0; i<n; ++i)
        {
            if(!visited[i])    
                return false;
        }
        return true;
        
    }
};