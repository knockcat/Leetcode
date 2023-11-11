class Graph {
public:
    
    vector<pair<int,int> > adj[105];
    
    int dijistras(int src, int dest)
    {
        vector<int> dist(105, INT_MAX);
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        
        dist[src] = 0;
        
        pq.push({dist[src], src});
        
        while(!pq.empty())
        {
            pair<int,int> curr = pq.top();
            pq.pop();
            
            int distance = curr.first;
            int node = curr.second;
            
            if(node == dest)
            {
                return distance;
            }
            
            for(auto& child : adj[node])
            {
                if(distance + child.second < dist[child.first])
                {
                    dist[child.first] = distance + child.second;
                    
                    pq.push({dist[child.first], child.first});
                }
            }
        }
        return -1;
    }
    
    Graph(int n, vector<vector<int>>& edges) {
        
        for(auto& edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];
            
            adj[u].push_back({v, wt});
        }
    }
    
    void addEdge(vector<int> edge) {
        
        int u  = edge[0];
        int v = edge[1];
        int wt = edge[2];
        
        adj[u].push_back({v, wt});
        
    }
    
    int shortestPath(int node1, int node2) {

        return dijistras(node1, node2);
        
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */