class Solution {
public:
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<vector<pair<int, int>>> g(n);
        for (auto &e : edges) {
            int u = e[0], v = e[1], w = e[2];
            g[u].emplace_back(v, w);
            g[v].emplace_back(u, w);
        }
        vector<vector<int>> ans(2);
        for (int i = 0; i < edges.size(); i++) {
            auto &e = edges[i];
            int u = e[0], v = e[1], w = e[2];
            int m = minimax(g, u, v);
            if (w < m) {
                ans[0].push_back(i);
            } else if (w == m) {
                ans[1].push_back(i);
            }
        }
        return ans;
    }
	
    int minimax(vector<vector<pair<int, int>>> &g, int src, int dst) {
        vector<int> dist(g.size(), 1e9);
        priority_queue<pair<int, int>> pq;
        pq.emplace(dist[src] = 0, src);
        while (!pq.empty()) {
            auto [pri, u] = pq.top(); pq.pop();
            if (-pri > dist[u]) {
                continue;
            }
            for (auto &[v, w] : g[u]) {
                if (u == src && v == dst) {
                    continue;
                }
                if (dist[v] > max(dist[u], w)) {
                    dist[v] = max(dist[u], w);
                    pq.emplace(-dist[v], v);
                }
            }
        }
        return dist[dst];
    }
};