class Solution {
public:
    long long ans = 0;
    
    int dfs(int curr, int prev, vector<int> adj[], int seats)
    {
        int people = 1;
        
        for(auto itr : adj[curr])
        {
            if(itr == prev)
                continue;
            people += dfs(itr, curr, adj, seats);
        }
        
        if(curr != 0)
            ans += (long)(ceil((double)people/seats));
        
        return people;
    }
    
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        
        int n = roads.size();
        vector<int> adj[n+1];
        
        for(auto itr : roads)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        
        dfs(0,-1,adj,seats);
        
        return ans;
        
    }
};