class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int,int>> adj[n];
        
        for(auto itr : flights){
            adj[itr[0]].push_back({itr[1],itr[2]});
        }
        
        vector<int> dist(n,1e9);
        
        queue<pair<int,pair<int,int>> > q;
        
        q.push({0,{src,0}});
        dist[src] = 0;
        
        // stops node cost
        
        while(!q.empty()){
            
            auto curr = q.front();
            q.pop();
            
            int stops = curr.first;
            int node = curr.second.first;
            int cost = curr.second.second;
            
            for(auto itr : adj[node])
            {
                // itr is pair of adjNode and cost
                if(stops > k)
                    continue;
                
                if(stops <= k and cost + itr.second <= dist[itr.first])
                {
                    dist[itr.first] = cost + itr.second;
                    q.push({stops+1,{itr.first,cost + itr.second}});
                }
            }
        }
        
        
        if(dist[dst] == 1e9)
            return -1;
        
        return dist[dst];
        
    }
};