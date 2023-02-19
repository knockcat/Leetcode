class Solution {
public:
    
    void dijkstra(vector<pair<int,int> > adj[], int& ans, int n, int k )
    {
        vector<bool> visited(n+1,false);
        vector<int> dist(n+1,1e9);
        
        priority_queue<pair<int,int> , vector<pair<int,int> > , greater<pair<int,int> > > pq;
        
        pq.push({0,k});
        dist[k] = 0;
        
        while(!pq.empty())
        {
            int curr = pq.top().second;
            pq.pop();
            
            if(visited[curr])   continue;
            
            visited[curr] = true;
            
            for(auto child : adj[curr])
            {
                int child_v = child.first;
                int wt = child.second;
                
                if(dist[curr] + wt < dist[child_v])
                {
                    dist[child_v] = dist[curr] + wt;
                    pq.push({dist[child_v], child_v});
                }
            }
        }
   
        ans = *max_element(dist.begin()+1,dist.end());
        
    }
    
    
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(auto itr : times)
            adj[itr[0]].push_back({itr[1],itr[2]});
        
        int ans = 1e9;
        dijkstra(adj,ans, n, k);
        
        return ans == 1e9 ? -1 : ans;
    }
};