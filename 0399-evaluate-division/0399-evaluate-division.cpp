class Solution {
public:
    
    unordered_map<string, vector<pair<string, double>>> graph;
    
    double dfs(string src, string dst, unordered_set<string>& visited)
    {
        if(graph.find(src) == graph.end())
            return -1;
        
        if(src == dst)
            return 1;
        
        for(auto itr : graph[src])
        {
            if(visited.count(itr.first))
                continue;
            visited.insert(itr.first);
            
            double res = dfs(itr.first, dst, visited);
            
            if(res != -1)
                return res * itr.second;
        }
        
        return -1;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        int n = equations.size();
        
        for(int i = 0; i < n; ++i)
        {
            string u = equations[i][0];
            string v = equations[i][1];
            
            double val = values[i];
            
            graph[u].push_back({v, val});
            graph[v].push_back({u, (double)1/val});
        }
        
        vector<double> result;
        
        for(auto itr : queries)
        {
            unordered_set<string> visited;
            
            result.push_back(dfs(itr[0], itr[1], visited));
        }
        
        return result;
        
    }
};