class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        if(source == target)
            return 0;
        
        unordered_map<int, vector<int>> adj;
        
        for(int route = 0; route < routes.size(); ++route)
        {
            for(auto& stop : routes[route])
            {
                adj[stop].push_back(route);
            }
        }
        
        queue<int> q;
        
        unordered_set<int> visited;
        
        for(auto& route : adj[source])
        {
            q.push(route);
            visited.insert(route);
        }
        
        int bus = 1;
        
        while(!q.empty())
        {
            int size = q.size();
            
            while(size--)
            {
                int route = q.front();
                q.pop();
                
                for(auto& stop : routes[route])
                {
                    if(stop == target)
                        return bus;
                    
                    for(auto& nextRoute : adj[stop])
                    {
                        if(visited.count(nextRoute))
                            continue;
                        q.push(nextRoute);
                        visited.insert(nextRoute);
                    }
                }
            }
            ++bus;
        }
        
        return -1;
    }
};