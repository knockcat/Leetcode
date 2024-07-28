class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        
        vector<priority_queue<int>> dis (n);
        for (int i=0;i<n;i++){
            dis[i].push(1e8);
        }
        //maxheap and node 
        // we will keep two dist of each node.
        
        vector<int> adj[n];
        for (auto it:edges){
            adj[it[0]-1].push_back(it[1]-1);
            adj[it[1]-1].push_back(it[0]-1);
        }
        
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0}); // time=0, node=0
        dis[0].pop();
        dis[0].push(0); 
        
        while (pq.empty()==false){
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            int k=dist/change;
            if (k%2==1) {
                dist=dist+(change-dist%change);
            }
            
            for (auto adjnode:adj[node]){
                int adjdis=dist+time;
                
                if (dis[adjnode].top()==1e8){
                    dis[adjnode].pop();
                    dis[adjnode].push(adjdis);
                    pq.push({adjdis,adjnode});
                }
                else if (dis[adjnode].size()<2 && dis[adjnode].top()!= adjdis){
                    dis[adjnode].push(adjdis);
                    pq.push({adjdis,adjnode});
                }
                else {
                    if (dis[adjnode].top() > adjdis){
                        dis[adjnode].pop();
                        dis[adjnode].push(adjdis);
                        pq.push({adjdis,adjnode});
                    }
                }
            }
        }
        
        return dis[n-1].top();
    }
};