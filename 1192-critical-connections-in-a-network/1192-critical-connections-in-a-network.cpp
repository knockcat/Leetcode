class Solution {
public:
    
    private:
        int timer = 0;
   
    void dfs(int sv, int parent, vector<bool>& visited, vector<int>& dis, vector<int>& low, int timer, vector<int> adj[],vector<vector<int>>& vp){
        visited[sv] = true;
        dis[sv] = low[sv] = timer++;
        
        for(auto itr : adj[sv])
        {
            if(itr == parent)
                continue;
            if(!visited[itr])
            {
                dfs(itr,sv,visited,dis,low,timer,adj,vp);
                low[sv] = min(low[sv],low[itr]);
                
                if(low[itr] > dis[sv])
                {
                    vp.push_back({itr,sv});
                }
            }
            else{
                low[sv] = min(low[sv],low[itr]);
            }
        }
    }
    public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections)
    {
        vector<int> adj[n];
        for(auto itr : connections)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        
        vector<bool> visited(n,false);
        vector<int> dis(n,-1), low(n,-1);
        vector<vector<int>> vp;
        int timer = 0;
        for(int i = 0; i<n; ++i)
        {
            if(!visited[i])
                dfs(i,-1,visited,dis,low,timer,adj,vp);
        }
        
        return vp;
    }
};