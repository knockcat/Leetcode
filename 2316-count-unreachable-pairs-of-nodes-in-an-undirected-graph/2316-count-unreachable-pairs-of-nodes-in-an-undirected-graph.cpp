class Solution {
public:
    

    void dfs(int sv, vector<int> adj[], vector<bool>& visited, long long& count)
    {
        visited[sv] = true;
        ++count;
        
        for(auto itr : adj[sv])
        {
            if(!visited[itr])
            {
                dfs(itr,adj,visited,count);
            }
        }
    }
    
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        vector<int> adj[n+1];
        
        for(auto itr : edges)
        {
            adj[itr[0]].push_back(itr[1]);
            adj[itr[1]].push_back(itr[0]);
        }
        
        long long total = (long long)n*(n-1)/2;
        vector<bool> visited(n+1,false);
        for(int i = 0; i<n; ++i)
        {
            long long count = 0;
            if(!visited[i])
            {
                dfs(i,adj,visited,count);
                total -= (long long)(count*(count-1))/2;
            }
        }
        
        
        return total;
    }
};