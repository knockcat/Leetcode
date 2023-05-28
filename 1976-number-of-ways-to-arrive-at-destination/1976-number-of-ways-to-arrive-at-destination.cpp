class Solution {

private:
    int mod = 1e9 + 7;
    
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        
        vector<pair<int,int>> adj[n+1];
        
        for(auto itr : roads)
        {
            adj[itr[0]].push_back({itr[1], itr[2]});
            adj[itr[1]].push_back({itr[0], itr[2]});
        }
        
        vector<long long> dist(n, 1e18), ways(n, 0);
        
        priority_queue<pair<long long,int>, vector<pair<long long,int>> , greater<pair<long long,int>> > pq;
        
        dist[0] = 0;
        
        ways[0] = 1;
        
        pq.push({dist[0], 0});
        
        while(!pq.empty())
        {
            long long dis = pq.top().first;
            long long node = pq.top(). second;
            
            pq.pop();
            
            for(auto itr : adj[node])
            {
                long long adjNode = itr.first;
                long long adjDis = itr.second;
                
                if((long long)adjDis + dis < dist[adjNode])
                {
                    dist[adjNode] = adjDis + dis;
                    
                    pq.push({dist[adjNode], adjNode});
                    
                    ways[adjNode] = ways[node];
                }
                else if(adjDis + dis == dist[adjNode])
                {
                    ways[adjNode] =  (ways[adjNode] + ways[node])  % mod;
                }
            }
        }
        
        if(ways[n-1] == 1e18)
            return 0;
        return ways[n-1] % mod;
    }
};