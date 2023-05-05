class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<int> adj[n+1];
        
        for(int i = 0; i < n; ++i)
        {
            for(auto itr : graph[i])
                adj[itr].push_back(i);
                
        }
            
        
        vector<int> indegree(n, 0);
        
        for(int i = 0; i < n; ++i)
        {
            for(auto itr : adj[i])
                ++indegree[itr];
        }
        
        queue<int> q;
        
        for(int i = 0; i < n; ++i)
        {
            if(indegree[i] == 0)
                q.push(i);
        }
        
        vector<int> safe;
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            
            safe.push_back(curr);
            
            for(auto itr : adj[curr])
            {
                --indegree[itr];
                
                if(indegree[itr] == 0)
                    q.push(itr);
            }
        }
        
        sort(safe.begin(),safe.end());
        
        return safe;
        
    }
};