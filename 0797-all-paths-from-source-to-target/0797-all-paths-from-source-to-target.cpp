class Solution {
public:
    
    void dfs(int sv, vector<vector<int>>& graph, vector<vector<int>>&res, vector<int>& ds)
    {
        ds.push_back(sv);
        
        if(sv == graph.size()-1)
            res.push_back(ds);
        
        for(auto itr : graph[sv])
        {
            dfs(itr,graph,res,ds);
        }
        ds.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
     
        int n = graph.size();
        vector<int> ds;
        vector<vector<int>> res;
        
        dfs(0,graph,res,ds);
        
        return res;
    }
};