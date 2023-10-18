class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& E, vector<int>& T) {
        vector<vector<int>> G(n);
        vector<int> indegree(n), dist(n);
        for (auto &e : E) { 
            G[e[0] - 1].push_back(e[1] - 1);
            indegree[e[1] - 1]++;
        }
        queue<int> q;
        for (int i = 0; i < n; ++i) {
            if (indegree[i] == 0) {
                q.push(i);
                dist[i] = T[i];
            } 
        }
        while (q.size()) {
            int u = q.front();
            q.pop();
            for (int v : G[u]) {
                dist[v] = max(dist[u] + T[v], dist[v]); 
                if (--indegree[v] == 0) q.push(v);
            }
        }
        return *max_element(begin(dist), end(dist)); 
    }
};