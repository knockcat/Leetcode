class Solution {

private:
    void dfs(int sv, vector<pair<int,int>> adj[], vector<bool>& visited, int& ans)
    {
        visited[sv] = true;
        
        for(auto itr : adj[sv])
        {
            int child = itr.first;
            int time = itr.second;
            
            if(!visited[child])
            {
                ans += time;
                dfs(child, adj, visited, ans);
            }
        }
    }
    
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(int i = 0; i < n; ++i)
        {
            if(manager[i] == -1)
                continue;
            
            adj[manager[i]].push_back({i, informTime[manager[i]]}); 
        }
        
        int ans = 0;
        
        vector<bool> visited(n+1, false);
        
        // dfs(headID, adj, visited, ans);
        
        queue<pair<int,int>> q;
        
        q.push({headID ,0});
        
        visited[headID] = true;
        
        while(!q.empty())
        {
            int node = q.front().first;
            int time = q.front().second;
            
            q.pop();
            
            ans = max(ans, time);
            
            for(auto itr : adj[node])
            {
                int child = itr.first;
                int currTime = itr.second;
                
                if(!visited[child])
                {
                    visited[child] = true;
                    q.push({child, time + currTime});
                }
            }
        }
        
        return ans;
    }
};