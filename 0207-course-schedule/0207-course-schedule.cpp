class Solution {
public:
    
    bool dfs(int sv, vector<int> adj[], vector<bool>& visited, vector<bool>& pathVisited)
    {
        visited[sv] = true;
        pathVisited[sv] = true;
        
        for(auto itr : adj[sv])
        {
            if(!visited[itr])
            {
                if(dfs(itr, adj, visited, pathVisited) == true)
                    return true;
            }
            else if(pathVisited[itr])
                return true;
        }
        
        pathVisited[sv] = false;
        return false;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n = numCourses;
        
        vector<int> adj[n+1];
        
        for(auto itr : prerequisites)
            adj[itr[1]].push_back(itr[0]);
        
        vector<bool> visited(n+1, false), pathVisited(n+1, false);
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
            {
                if(dfs(i, adj, visited, pathVisited))
                    return false;
            }
        }
        
        return true;
    }
};