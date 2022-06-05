// 743.✅ Network Delay Time

class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {

        vector<int> dis(n + 1, INT_MAX);
        dis[k] = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < times.size(); j++)
            {
                int u = times[j][0];
                int v = times[j][1];
                int w = times[j][2];

                if (dis[u] != INT_MAX && dis[u] + w < dis[v])
                {
                    dis[v] = w + dis[u];
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dis[i] == INT_MAX)
                return -1; // If any node is not reachable from k
            ans = max(ans, dis[i]);
        }
        return ans;
    }
};