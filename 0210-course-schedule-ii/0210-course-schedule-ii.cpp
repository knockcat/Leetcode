class Solution {
    
private:
    bool dfs(int sv, vector<int> adj[], vector<bool>& visited, stack<int>& st, vector<bool>& pathVisited)
    {
        visited[sv] = true;
        pathVisited[sv] = true;
        
        for(auto itr : adj[sv])
        {
            if(!visited[itr])
            {
                if(dfs(itr, adj, visited, st, pathVisited) == true)
                    return true;
            }
            else if(pathVisited[itr])
                return true;
        }
        
        pathVisited[sv] = false;
        
        st.push(sv);
        
        return false;
    }
    
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        int n = numCourses;
        
        vector<int> adj[n+1];
        
        for(auto itr : prerequisites)
        {
            adj[itr[1]].push_back(itr[0]);
        }
        
        vector<bool> visited(n, false), pathVisited(n, false);
        
        vector<int> topo;
        
        stack<int> st;
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
            {
                if(dfs(i, adj, visited, st, pathVisited) == true)
                    return {};
            }
        }
        
        while(!st.empty())
        {
            topo.push_back(st.top());
            st.pop();
        }
        
        return topo;
    }
};