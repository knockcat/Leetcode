class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
 
        vector<pair<int,double>> adj[n];
        
        for(int i = 0; i < edges.size(); ++i)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back({v, succProb[i]});
            adj[v].push_back({u , succProb[i]});
        }
        
        queue<int> q;
        
        vector<double> dist(n, 0.0);
        
        dist[start] = 1.0;
        
        q.push(start);
            
        while(!q.empty())
        {
            int node = q.front();
            
            q.pop();
            
            for(auto itr : adj[node])
            {
                int x = itr.first;
                double prob = itr.second;
                
                double newProb = dist[node] * prob;
                
                if(newProb > dist[x])
                {
                    dist[x] = newProb;
                    q.push(x);
                }
            }
        }
     
        return dist[end];

    }
};