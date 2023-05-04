class Solution {
public:
    
    bool dfs(int sv, vector<vector<int>>& graph, vector<bool>& visited, vector<bool>& pathVisited, vector<bool>& check)
    {
        visited[sv] = true;
        pathVisited[sv] = true;
        check[sv] = false;
        
        for(auto itr : graph[sv])
        {
            if(!visited[itr])
            {
                if(dfs(itr, graph, visited, pathVisited, check) == true)
                {
                    check[itr] = false;
                    return true;
                }
            }
            else if(pathVisited[itr])
            {
                check[itr] = false;
                return true;
            }
        }
        
        pathVisited[sv] = false;
        check[sv] = true;
        
        return false;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<bool> visited(n+1, false), pathVisited(n+1, false), check(n+1, false);
        
        vector<int> safe;
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
                dfs(i, graph, visited, pathVisited, check);
        }
        
        for(int i = 0; i < n; ++i)
        {
            if(check[i])
                safe.push_back(i);
        }
        
        return safe;
        
    }
};