class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        if(n == 1)
            return 0;
        
        queue<pair<int, int> > q;
        
        set<pair<int, int> > visited;
        
        int allVisited = (1 << n) - 1;
        
        for(int i = 0; i < n; ++i)
        {
            int mask = 1 << i;
            
            q.push({i, mask});
            
            visited.insert({i, mask});
        }
        
        int path = 0;
        
        while(!q.empty())
        {
            int size = q.size();
            
            ++path;
            
            while(size--)
            {
                auto curr = q.front();
                q.pop();
                
                int node = curr.first;
                int mask = curr.second;
                
                for(auto& adjNode : graph[node])
                {
                    int newMask = mask | (1 << adjNode);
                    
                    if(newMask == allVisited)
                        return path;
                    
                    if(!visited.count({adjNode, newMask}))
                    {
                        q.push({adjNode, newMask});
                        visited.insert({adjNode, newMask});
                    }
                }
            }
        }
        
        return -1;
        
    }
};