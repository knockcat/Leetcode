// 1192.✅ Critical Connections in a Network

class Solution
{
public:
    void DFS(int sv, vector<int> adj[], vector<int> &disc, vector<int> &low, vector<int> &parent, vector<vector<int>> &bridges)
    {
        static int time = 0;
        disc[sv] = low[sv] = time;
        time += 1;

        for (int v : adj[sv])
        {
            if (disc[v] == -1)
            {
                parent[v] = sv;
                DFS(v, adj, disc, low, parent, bridges);
                low[sv] = min(low[sv], low[v]);

                if (low[v] > disc[sv])
                    bridges.push_back(vector<int>({sv, v}));
            }
            else if (v != parent[sv])
                low[sv] = min(low[sv], disc[v]);
        }
    }

    void findBridges_Tarjan(int n, vector<int> adj[], vector<vector<int>> &bridges)
    {
        vector<int> disc(n + 1, -1), low(n + 1, -1), parent(n + 1, -1);
        for (int i = 0; i < n; ++i)
        {
            if (disc[i] == -1)
                DFS(i, adj, disc, low, parent, bridges);
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        vector<int> adj[n + 1];

        for (int i = 0; i < connections.size(); ++i)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }

        vector<vector<int>> bridges;

        findBridges_Tarjan(n, adj, bridges);

        return bridges;
    }
};