class Solution {
private:
    bool check(int sv, int col, vector<vector<int>>& graph, vector<int>& color, vector<bool>& visited)
    {
        color[sv] = col;
        visited[sv] = true;
        
        for(auto itr : graph[sv])
        {
            if(!visited[itr])
            {
                if(!check(itr, col ^ 1, graph, color, visited))
                    return false;
            }
            else if(color[sv] == color[itr])
                return false;
        }
        
        return true;
    }
    
public:
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<bool> visited(n+1, false);
        
        vector<int> color(n+1,-1);
        
        for(int i = 0; i < n; ++i)
        {
            if(!visited[i] and !check(i, 0, graph,color, visited))
                return false;   
        }
        
        return true;
        
    }
};