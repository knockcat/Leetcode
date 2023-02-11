class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        
        vector<vector<pair<int,int>>> graph(n);
        for(auto edge: redEdges)
            graph[edge[0]].emplace_back(edge[1],0);
        for(auto edge: blueEdges)
            graph[edge[0]].emplace_back(edge[1],1); 
        vector<int> dist(n,-1); 
        
        queue<vector<int>> q;
        q.emplace(vector<int>{0,0,-1});
        
        while(!q.empty()) {
            auto front = q.front();
            q.pop();
            dist[front[0]] = dist[front[0]] != -1 ? dist[front[0]] : front[1];
            
            for(auto &adj : graph[front[0]]) {
				
                if(front[2] != adj.second && adj.first!= -1) {
                    q.emplace(vector<int>{adj.first, front[1] + 1, adj.second});
					
                    adj.first = -1;
                }
            }
        }
        return dist;
    }
};